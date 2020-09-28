#pragma once

namespace memory
{
	uintptr_t find_dma_addy(uintptr_t ptr, std::vector<unsigned int> offsets);
}