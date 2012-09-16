#include "gtmxc_types.h"

#include <stdlib.h>
#include <stdio.h>

int main()
{
  /* Initialize */
  gtm_status_t gtm_init(void);

  gtm_long_t buf_len = 2050;
  gtm_char_t * msg_buffer = (gtm_char_t*) gtm_malloc(buf_len);

  /* Get status */
  gtm_zstatus(msg_buffer, buf_len);

  printf("status = %s\n",msg_buffer);

  /* Shutdown */
  gtm_free(msg_buffer);

  gtm_status_t status_on_exit = gtm_exit ();

  printf("final status = %d\n",status_on_exit);

  return 0;
}
