#include "Device.h"

namespace Device
{
	void CreateDevice(D3D12Global& d3d)
	{
#if defined(_DEBUG) || defined(DEBUG) 
		// Enable the D3D12 debug layer.
		{
			ComPtr<ID3D12Debug> debugController;
			ThrowIfFailed(D3D12GetDebugInterface(IID_PPV_ARGS(&debugController)));
			debugController->EnableDebugLayer();
		}
#endif

		ThrowIfFailed(CreateDXGIFactory1(IID_PPV_ARGS(d3d.factory.GetAddressOf())));

		HRESULT deviceResult = D3D12CreateDevice(nullptr, D3D_FEATURE_LEVEL_11_0, IID_PPV_ARGS(&d3d.device));

		if (FAILED(deviceResult))
		{
			ComPtr<IDXGIAdapter> pWarpAdapter;
			//	ThrowIfFailed(d3d.factory->EnumWarpAdapter(IID_PPV_ARGS(&pWarpAdapter)));

			ThrowIfFailed(D3D12CreateDevice(pWarpAdapter.Get(), D3D_FEATURE_LEVEL_11_0, IID_PPV_ARGS(&d3d.device)));
		}

	}
}