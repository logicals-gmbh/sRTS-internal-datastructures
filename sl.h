#ifndef SL_H_
#define SL_H_

#include <stddef.h>
#include <stdint.h>

#define UEBER_SIZE 8

typedef uint8_t Byte;
typedef struct tag_SRTS_Context SRTS_Context;
typedef SRTS_Context* SRTS_ContextPtr;

Byte* SL_getInternalMem(SRTS_ContextPtr ctx);
size_t SL_getInternalMemSize(SRTS_ContextPtr ctx);

#endif /* SL_H_ */
