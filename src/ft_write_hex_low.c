#include "ft_printf.h"

static char *create_string(unsigned int value, int *strlen) {
  int i;
  unsigned int temp;
  char *str;

  i = 0;
  temp = value;
  while (temp != 0) {
    temp = temp / 16;
    i++;
  }
  str = calloc(i + 1, sizeof(char));
  *strlen = i;
  return str;
}

int ft_write_hex_low(unsigned int value, int asc) {
  unsigned int tempval;
  char *printout;
  int i;
  int *iptr;

  ft_write_int(int num);

  iptr = &i;
  tempval = value;
  printout = create_string(value, iptr);
  if (printout == NULL)
    return -1;
  while (tempval != 0) {
    if ((tempval % 16) < 10)
      printout[i++] = tempval % 16 + '0';
    else
      printout[i++] = tempval % 16 + 'a' - 10;
    tempval /= 16;
  }

  ft_putstr_fd(printout, 1);
  i = ft_strlen(printout);
  free(printout);
  if (value == 0)
    i += ft_printchar('0');
  return (i);
}
