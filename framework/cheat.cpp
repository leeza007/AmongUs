#include "includes.h"

void cheat::init()
{
	/* All of the features. I guess*/

	if (!menu::settings.cheat_switch)
		return;

	if (menu::settings.always_be_imposter)
	{
		offsets::get_roles = memory::find_dma_addy(GameAssembly + 0xDAF3E8, { 0x5C, 0x20, 0x34, 0x28 });
		int* role = (int*)offsets::get_roles;
		*role = 1;
	}
	else if (menu::opened && !menu::settings.always_be_imposter)
	{
		offsets::get_roles = memory::find_dma_addy(GameAssembly + 0xDAF3E8, { 0x5C, 0x20, 0x34, 0x28 });
		int* role = (int*)offsets::get_roles;
		*role = 0;
	}

	if (menu::settings.kill_value)
	{
		offsets::get_distance = memory::find_dma_addy(GameAssembly + 0xDA5A84, { 0x5C, 0x4, 0x40 });
		int* distance = (int*)offsets::get_distance;
		*distance = menu::settings.kill_distance;
	}
	else if (menu::opened && !menu::settings.kill_value)
	{
		offsets::get_distance = memory::find_dma_addy(GameAssembly + 0xDA5A84, { 0x5C, 0x4, 0x40 });
		int* distance = (int*)offsets::get_distance;
		*distance = 0;
	}

	if (menu::settings.speed)
	{
		offsets::get_speed = memory::find_dma_addy(GameAssembly + 0xDA5A84, { 0x5C, 0x4, 0x14 });
		float* speed = (float*)offsets::get_speed;
		*speed = menu::settings.speed_value;
	}
	else if (menu::opened && !menu::settings.speed)
	{
		offsets::get_speed = memory::find_dma_addy(GameAssembly + 0xDA5A84, { 0x5C, 0x4, 0x14 });
		float* speed = (float*)offsets::get_speed;
		*speed = 1;
	}

	if (menu::settings.no_cooldown_time)
	{
		offsets::get_cooldown = memory::find_dma_addy(GameAssembly + 0xDA5A84, { 0x5C, 0x4, 0x20 });
		float* cooldown = (float*)offsets::get_cooldown;
		*cooldown = 0.02f;
	}
	else if (menu::opened && !menu::settings.no_cooldown_time)
	{
		offsets::get_cooldown = memory::find_dma_addy(GameAssembly + 0xDA5A84, { 0x5C, 0x4, 0x20 });
		float* cooldown = (float*)offsets::get_cooldown;
		*cooldown = 0.1f;
	}
}