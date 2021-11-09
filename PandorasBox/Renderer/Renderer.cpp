#include "Renderer.h"
#include "Device.h"
#include "Fence.h"

Renderer::Renderer()
{

}

Renderer::~Renderer()
{
	Shutdown();
}

void Renderer::Initialize(HWND hwnd)
{
	m_Hwnd = hwnd;
	
	Device::CreateDevice(d3d);

	Fence::CreateFence(d3d);
	
}

void Renderer::Update()
{

}

void Renderer::Draw()
{

}

void Renderer::InitializeDirect3D()
{

}

void Renderer::Shutdown()
{

}