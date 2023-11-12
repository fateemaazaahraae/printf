#include "main.h"

/**
 * _printf - creating my own printf
 * @format: the specefier format
 * @...: formats
 *
 * Return: the length of printed parameters
 */

int _printf(const char *format, ...)
{
	struct a spe[] = {
		{"%s", &print_string}, {"%c", &print_char}, {"%%", &print_sign}
	};
	va_list args;
	int i;
	int j;
	int len;

	i = 0;
	va_start(args, format);
	len = 0;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		j = 0;
		while (j <= 2 && format[i] == spe[j].specefier[0])
		{
			if (format[i + 1] == spe[j].specefier[1])
			{
				len += spe[j].f(args);
				i = i + 2;
			}
			j++;
		}
		ft_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
