#include "Fence.h"

namespace Fence
{
	void CreateFence(D3D12Global& d3d)
	{
		ThrowIfFailed(d3d.device->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&d3d.fence)));
	}
}