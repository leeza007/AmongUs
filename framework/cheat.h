#include "includes.h"

namespace cheat
{
	void init();

	namespace offsets
	{
		inline uintptr_t get_distance = NULL;
		inline uintptr_t get_roles = NULL;
		inline uintptr_t get_speed = NULL;
		inline uintptr_t get_cooldown = NULL;
	}
};