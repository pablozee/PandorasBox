#pragma once
#include <Windows.h>
#include "D3dStructures.h"

class Renderer
{
public:
	Renderer();
	~Renderer();

	void Initialize(HWND hwnd);
	void Update();
	void Draw();

	HWND GetHwnd() const { return m_Hwnd; }

private:
	void InitializeDirect3D();

	void Shutdown();

	HWND m_Hwnd;

	D3D12Global d3d;
};