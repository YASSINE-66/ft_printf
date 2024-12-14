#include "ft_printf.h"
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
