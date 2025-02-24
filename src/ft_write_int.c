#include "ft_printf.h"

ssize_t ft_write_int(int num) {
  char buffer[20];
  int len = snprintf(buffer, sizeof(buffer), "%d", num);
  return write(1, buffer, len);
}
