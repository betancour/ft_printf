#include "printf.h"

int ft_write_c(char c) {
  ft_putchar_fd(c, 1);
  return 1;
}
