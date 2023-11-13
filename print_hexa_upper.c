#include "main.h"

/**
 * len_HEX - calculate the length of the number
 * @num: the number
 *
 * Return: the length
 */

int len_HEX(unsigned long int num)
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
 * put_HEX - printing integer
 * @nb: number
 *
 * Return: void
 */

void put_HEX(unsigned long int nb)
{
	char *p;

	p = "0123456789ABCDEF";
	if (nb < 16)
		ft_putchar(p[nb]);
	else
	{
		put_HEX(nb / 16);
		put_HEX(nb % 16);
	}
}

/**
 * print_hexa_upper - prints int in hexadecimal (upper case)
 * @list: argument
 *
 * Return: length of the number
 */

int print_hexa_upper(va_list list)
{
	unsigned long int num;
	int length;

	num = va_arg(list, unsigned int);
	put_HEX(num);
	length = len_HEX(num);
	return (length);
}
