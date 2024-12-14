#include "ft_printf.h"
int	ft_man(va_list arg, char c)
{
	int	count;

	count = 0;
    if (c == 'c')
		count = ft_putchar(va_arg(arg, int));
	else if (c == 's')
		count = ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(arg, int));
	else if (c == '%')
		count = ft_putchar('%');
    else if (c == 'p')
		count += ft_putpoi(va_arg(arg, unsigned long));
    else if (c == 'x' || c == 'X')
		count = ft_putxX(va_arg(arg, unsigned int), c);
    else if (c == 'u')
		count = ft_putunsigned(va_arg(arg, unsigned int));
	return (count);
}
int	ft_printf(const char *format, ...)
{
    int i;
    int lent;
    i = 0;
    lent = 0;
    va_list arg;
    va_start (arg,format);
    while(format[i])
    {
        if (format[i] == '%' && format[++i])
		{
           lent += ft_man(arg,format[i]);
		}
        else
        lent += ft_putchar(format[i]);
        i++;
        va_end(arg);
	}
    return (lent);
}