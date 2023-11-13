#include "main.h"

/**
 * len_hex - calculate the length of the number
 * @num: the number
 *
 * Return: the length
 */

int len_hex(unsigned long int num)
{
	int count;

	count = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		count++;
		num = num / 16;
	}
	return (count);
}

/**
 * put_hex - printing integer
 * @nb: number
 *
 * Return: void
 */

void put_hex(unsigned long int nb)
{
	char *p;

	p = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(p[nb]);
	else
	{
		put_hex(nb / 16);
		put_hex(nb % 16);
	}
}

/**
 * print_hexa_lower - prints int in hexadecimal (lower case)
 * @list: argument
 *
 * Return: length of the number
 */

int print_hexa_lower(va_list list)
{
	unsigned long int num;
	int length;

	num = va_arg(list, int);
	put_hex(num);
	length = len_hex(num);
	return (length);
}
