#include "dpm.h"

void DPM_getINPContext(SRTS_ContextPtr ctx, INPPtr* inp)
{
  Ueber* u = (Ueber*)SL_getInternalMem(ctx);
  *inp = &u->inp;
}

void DPM_getSSHContext(SRTS_ContextPtr ctx, SSHPtr* ssh)
{
  Ueber* u = (Ueber*)SL_getInternalMem(ctx);
  *ssh = &u->ssh;
}
