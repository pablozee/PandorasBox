#pragma once
#include "RendererHelpers.h"

using Microsoft::WRL::ComPtr;

struct D3D12Global
{
	ComPtr<ID3D12Device>	device;
	ComPtr<IDXGIFactory4>	factory;
	ComPtr<ID3D12Fence>		fence;
};