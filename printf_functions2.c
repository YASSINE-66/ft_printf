#include "ft_printf.h"
int 	ft_putstr(char *s)
{
	int count;
	count = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return 6;
	}
	while (*s)
	{
		write(1, s++, 1);
		count++;
	}
	return (count);
}

int	ft_putunsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}

int	ft_putxX(unsigned int nb, char c)
{
	char	*x;
	int		count;

	count = 0;
	if (c == 'x')
		x = "0123456789abcdef";
	else if (c == 'X')
		x = "0123456789ABCDEF";
	if (nb > 15)
		count += ft_putxX(nb / 16, c);
	count += ft_putchar(x[nb % 16]);
	return (count);
}
