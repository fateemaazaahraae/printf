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
	b spe[] = {
		{"%s", print_string}, {"%c", print_char}, {"%i", print_int},
		{"%d", print_d}, {"%%", print_sign}, {"%b", print_binary},
		{"%u", print_unsigned}, {"%o", print_octal}, {"%x", print_hexa_low},
		{"%X", print_hexa_upp}, {"%S", print_String}, {"%p", print_add},
		{"%r", print_rev_str}, {"%R", print_ro13}
	};
	va_list args;
	int i;
	int j;
	int len;

	i = 0;
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		j = 0;
		while (j <= 13 && format[i] == spe[j].specefier[0])
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
