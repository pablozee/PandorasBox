#pragma once
#include <Windows.h>

class Renderer
{
public:
	Renderer();
	~Renderer();

	void Initialize(HWND hwnd);
	void Update();
	void Draw();

private:
	void InitializeDirect3D();
};