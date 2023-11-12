#include "main.h"

/**
 * len_uns - calculate the length of the number
 * @num: the number
 *
 * Return: the length
 */

int len_uns(unsigned int num)
{
	int count;

	count = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		count++;
		num = num / 10;
	}
	return (count);
}

/**
 * put_uns - printing integer
 * @nb: number
 *
 * Return: void
 */

void put_uns(unsigned int nb)
{
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		put_uns(nb / 10);
		put_uns(nb % 10);
	}
}

/**
 * print_unsigned - passing unsigned int
 * @list: argument
 *
 * Return: the length of the number
 */

int print_unsigned(va_list list)
{
	unsigned int n;
	int length;

	n = va_arg(list, unsigned int);
	put_uns(n);
	length = len_uns(n);
	return (length);
}
