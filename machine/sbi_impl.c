#include "mtrap.h"
#include "sbi.h"
#include "atomic.h"

uintptr_t __sbi_query_memory(uintptr_t id, memory_block_info *p)
{
  if (id == 0) {
    p->base = first_free_paddr;
    p->size = mem_size + DRAM_BASE - p->base;
    return 0;
  }

  return -1;
}
