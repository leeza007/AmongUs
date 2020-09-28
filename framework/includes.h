#pragma once

/* windows header files */
#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <vector>
#include <iostream>
#include <fstream>

/* cheat header files */
#include "cheat.h"
#include "menu/menu.h"
#include "globals.h"
#include "utilitys/memory.h"
#include "kiero/kiero.h"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_impl_dx11.h"

typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;