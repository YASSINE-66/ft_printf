#include <unistd.h>
#include "ft_printf.h"
int	ft_putchar(char c)
{
	int count;
	count = 0;
	write(1,&c,1);
	count++;
	return (count);
}