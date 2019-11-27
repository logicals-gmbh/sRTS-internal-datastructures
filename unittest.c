#include "dpm.h"
#include "sl_impl.h"

#include <stdio.h>

typedef enum tag_Fake
{
  UNDEFINED = 0
} Fake;

/* this check does not compute on all compilers, e. g. msvc */
static void CompileTimeCheck(void)
{
  Fake f = UEBER_SIZE - sizeof(Ueber);
  (void)f;
}

int main(void)
{
  SRTS_Context ctx;

  CompileTimeCheck();

  printf("Size of Ueber <= UEBER_SIZE: %d\n", sizeof(Ueber) <= UEBER_SIZE);
  printf("Size of Ueber <= SL_getInternalMemSize(&ctx): %d\n",
         sizeof(Ueber) <= SL_getInternalMemSize(&ctx));
  return 0;
}
