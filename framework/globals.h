#pragma once

static uintptr_t GameAssembly = (uintptr_t)GetModuleHandle("GameAssembly.dll");
static uintptr_t UnityPlayer = (uintptr_t)GetModuleHandle("UnityPlayer.dll");

namespace globals
{
	extern uintptr_t* local;
	extern bool is_in_game;
};