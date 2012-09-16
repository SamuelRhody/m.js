#include "gtmxc_types.h"

#include <stdlib.h>
#include <stdio.h>

int main()
{
  gtm_status_t gtm_init(void);

  gtm_long_t buf_len = 2050;
  gtm_char_t * msg_buffer = (gtm_char_t*)malloc(buf_len);

  gtm_zstatus(msg_buffer, buf_len);

  printf("status = %s\n",msg_buffer);

  return 0;
}
