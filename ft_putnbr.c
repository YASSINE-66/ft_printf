#include <unistd.h>
#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	nb;

	nb = (n < 0) ? -n : n;

	if (n < 0)
	{
		ft_putchar('-');
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
	return (numlen(n));
}