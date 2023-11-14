#include "main.h"

/**
 * print_Str - prints the string.
 * @list: list of arguments.
 *
 * Return: length of the string.
 */
int print_Str(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\x", 2);
			if (str[i] < 16)
			{
				ft_putchar('0');
				len++;
			}
			put_HEX(str[i]);
			len += len_HEX(str[i]) + 2;
		}
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	return (len);
}
