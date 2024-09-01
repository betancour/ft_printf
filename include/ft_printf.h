#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

#ifdef __linux__
#define MY_SYMBOL 1
#define MY_ULL_MAX ULLONG_MAX
#elif __APPLE__
#define MY_SYMBOL 2
#define MY_ULL_MAX ULLONG_MAX
#endif

#define FD 1

ssize_t	ft_write_c(char c);
ssize_t	ft_write_str(char *str);
ssize_t	ft_write_int_base(int num, int base, char *basechars, ssize_t *digits);
ssize_t	ft_write_uns_base(unsigned long long n,
			unsigned long long b,
			char *c,
			ssize_t *d);
ssize_t	ft_write_dec(int num);
ssize_t	ft_write_int(int num);
ssize_t	ft_write_ptr(void *num);
ssize_t	ft_write_uns(unsigned int num);
ssize_t	ft_write_hex_low(unsigned int num);
ssize_t	ft_write_hex_cap(unsigned int num);
int		ft_printf(const char *fmt, ...);
#endif
