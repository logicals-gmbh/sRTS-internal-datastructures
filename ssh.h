#ifndef SSH_H_
#define SSH_H_

#include "sl.h"

void SSH_init(SRTS_ContextPtr ctx);

void SSH_getData(SRTS_ContextPtr ctx, uint32_t* result);

#endif /* SSH_H_ */
