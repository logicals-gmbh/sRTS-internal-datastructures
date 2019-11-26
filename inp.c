#include "dpm.h"
#include "inp.h"

void INP_init(SRTS_ContextPtr ctx)
{
  INP* inp;
  DPM_getINPContext(ctx, &inp);

  inp->a = 42;
}

void INP_getData(SRTS_ContextPtr ctx, uint8_t* result)
{
  INP* inp;
  DPM_getINPContext(ctx, &inp);

  *result = inp->a;
}
