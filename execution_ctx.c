#include "sl_impl.h"
#include "entry.h"

static SRTS_Context ctx;

int main(void)
{
  return ENTRY_init(&ctx);
}
