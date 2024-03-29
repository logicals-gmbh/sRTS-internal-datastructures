#include "dpm.h"
#include "entry.h"
#include "inp.h"
#include "ssh.h"

#include <inttypes.h>
#include <stdio.h>

int ENTRY_init(SRTS_ContextPtr ctx)
{
  uint8_t inpData;
  uint32_t sshData;

  if (sizeof(Ueber) > SL_getInternalMemSize(ctx))
  {
    fprintf(stderr, "Insufficient memory for internal data structures.\n");
    return 1;
  }

  INP_init(ctx);
  SSH_init(ctx);

  INP_getData(ctx, &inpData);
  SSH_getData(ctx, &sshData);

  printf("Interpreter data: %" PRIu8 "\n", inpData);
  printf("Safetyshell data: %" PRIu32 "\n", sshData);
  return 0;
}
