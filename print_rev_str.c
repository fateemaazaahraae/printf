#include "main.h"

/**
 * print_rev_str - print a given string in reverse
 * @list: arguments
 *
 * Return: length of the string
 */

int print_rev_str(va_list list)
{
	char *str;
	int len, j;

	str = va_arg(list, char *);
	j = 0;
	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	len = j;
	j--;
	while (j >= 0)
	{
		ft_putchar(str[j]);
		j--;
	}
	return (len);
}
