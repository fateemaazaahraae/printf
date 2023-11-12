#include "main.h"

/**
 * print_string - printing a given string
 * @list: list of argument
 *
 * Return: the length of the string
 */

int print_string(va_list list)
{
	char *str;
	int i, length;

	str = va_arg(list, char *);
	i = 0;
	if (str == NULL)
	{
		str = "(null)";
		length = ft_strlen(str);
		while (i < length)
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	else
	{
		length = ft_strlen(str);
		while (i < length)
		{
			ft_putchar(str[i]);
				i++;
		}
	}
	return (length);
}
