#include "ft_printf.h"
int	ft_putpoi(unsigned long n)
{
	int				count;
	unsigned long	nb;

	nb = n;
	count = 0;

	if (!nb)
	{
		write(1, "(nil)", 5);
		return 5;
	}
	count += ft_putstr("0x");
	return (count += ft_convert(nb));
}
