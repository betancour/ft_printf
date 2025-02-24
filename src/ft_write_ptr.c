#include "ft_printf.h"

ssize_t ft_write_ptr(void *ptr) {
  char buffer[20];
  int len = snprintf(buffer, sizeof(buffer), "%p", ptr);
  return write(1, buffer, len);
}
