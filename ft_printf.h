#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
int	ft_putchar(char c);
int numlen (int n);
int	ft_putnbr(int n);
int 	ft_putstr(char *s);
int	ft_printf(const char *format, ...);
int	ft_putpoi(unsigned long n);
int	ft_convert(unsigned long n);
int	ft_putxX(unsigned int nb, char c);
int	ft_putunsigned(unsigned int n);

#endif