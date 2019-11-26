#ifndef DPM_H_
#define DPM_H_

/* this is an internal include file, unknown to the integrator */

#include "sl.h"

typedef struct tag_INP INP;
typedef INP* INPPtr;
typedef struct tag_SSH SSH;
typedef SSH* SSHPtr;
typedef struct tag_Ueber Ueber;

typedef struct tag_INP
{
  uint8_t a;
} INP;

typedef struct tag_SSH
{
  uint32_t b;
} SSH;

struct tag_Ueber
{
  INP inp;
  SSH ssh;
};

void DPM_getINPContext(SRTS_ContextPtr ctx, INPPtr* inp);
void DPM_getSSHContext(SRTS_ContextPtr ctx, SSHPtr* ssh);

#endif /* DPM_H_ */
