#include "main.h"

/**
 * _printf - my own printf
 * @format: string
 * @...: other argument
 *
 * Return: the length of the printed char
 */

int _printf(const char *format, ...)
{
	int len;
	char ch;
	char *str;
	int str_len;
	va_list list_args;

	if (format == NULL)
		return (-1);
	va_start(list_args, format);
	len = 0;
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			len++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				len++;
			}
			else if (*format == 'c')
			{
				ch = va_arg(list_args, int);
				write(1,&ch, 1);
				len++;
			}
			else if (*format == 's')
			{
				str = va_arg(list_args, char *);
				str_len = 0;
				while (str[str_len])
					str_len++;
				write(1, str, str_len);
				len += str_len;
			}
		}
		format++;
	}
	va_end(list_args);
	return (len);
}
