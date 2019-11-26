#include "dpm.h"
#include "ssh.h"

void SSH_init(SRTS_ContextPtr ctx)
{
  SSH* ssh;
  DPM_getSSHContext(ctx, &ssh);

  ssh->b = 0xFFFFFFFF;
}

void SSH_getData(SRTS_ContextPtr ctx, uint32_t* result)
{
  SSH* ssh;
  DPM_getSSHContext(ctx, &ssh);

  *result = ssh->b;
}
