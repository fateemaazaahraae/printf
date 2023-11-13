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
		{"%s", print_string}, {"%c", print_char}, {"%%", print_sign},
		{"%i", print_int}, {"%d", print_int}, {"%u", print_unsigned},
		{"%S", print_Str}, {"%x", print_hexa_lower}, {"%X", print_hexa_upper},
<<<<<<< HEAD
		{"%o", print_octal}, {"%r", print_rev_str}, {"%R", print_rot13},
		{NULL, NULL}
=======
		{"%r", print_rev_str}, {"%R", print_rot13}, {"%b", print_bit},
		{"%o", print_octal}, {NULL, NULL}
>>>>>>> 3197a0fb0276a2866ff7d96b5e04da23491bcfea
	};
	va_list args;
	int i, j, len, checker;

	i = 0;
	va_start(args, format);
	len = 0;
	checker = 0;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		j = 0;
<<<<<<< HEAD
		while (j <= 11 && format[i] == spe[j].specefier[0])
=======
		while (j <= 12 && format[i] == spe[j].specefier[0])
>>>>>>> 3197a0fb0276a2866ff7d96b5e04da23491bcfea
		{
			if (format[i + 1] == spe[j].specefier[1])
			{
				len += spe[j].f(args);
				checker = 1;
				i = i + 2;
			}
			j++;
		}
		if (checker == 0)
		{
			ft_putchar(format[i]);
			len++;
			i++;
		}
		checker = 0;
	}
	va_end(args);
	return (len);
}

