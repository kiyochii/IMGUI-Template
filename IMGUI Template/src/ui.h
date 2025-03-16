
#pragma once
#include "../IMGUI/imgui.h"
#include "../IMGUI/imgui_impl_dx9.h"
#include "../IMGUI/imgui_impl_win32.h"
#include <d3d9.h>
#include <tchar.h>
#include "winuser.h"


class ui
{


	public:
		ui();
		HWND hwnd;
		WNDCLASSEXW wc;
		const int WIDHT = 500;
		const int HEIGHT = 300;
		void run();


	private:

		bool CreateDeviceD3D(HWND hWnd);
		void ResetDevice();
		void CleanupDeviceD3D();
		void Render();
		void Destroy();

		MSG msg;
		bool show_demo_window;
		bool show_another_window;
		bool done;
		ImVec4 clear_color;

		
};

