#include "main.h"

/**
 * print_rot13 - prints the rot13'ed string
 * @list: argument
 *
 * Return: the length
 */

int print_rot13(va_list list)
{
	char *str;
	int i, len;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] += 13;
			ft_putchar(str[i]);
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] -= 13;
			ft_putchar(str[i]);
		}
		i++;
	}
	return (len);
}
