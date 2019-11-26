#include "sl.h"
#include "sl_impl.h"

Byte* SL_getInternalMem(SRTS_ContextPtr ctx)
{
  return &ctx->mem[0];
}

size_t SL_getInternalMemSize(SRTS_ContextPtr ctx)
{
  return sizeof(ctx->mem);
}
