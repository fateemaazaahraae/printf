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
	char *lol;
	char *p = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, len;

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	lol = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (lol == NULL)
		return (-1);
	len = 0;
	while (str[len] != '\0')
	{
		i = 0;
		while (i < 52)
		{
			if (str[len] == p[i])
			{
				lol[len] = rot13[i];
				break;
			}
			i++;
		}
		if (i == 52)
			lol[len] = str[len];
		len++;
	}
	len = 0;
	while (lol[len] != '\0')
	{
		ft_putchar(lol[len]);
		len++;
	}
	free(lol);
	return (len);
}
