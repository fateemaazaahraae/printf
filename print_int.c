#include "main.h"

/**
 * len_num - calculate the length of the number
 * @num: the number
 *
 * Return: the length
 */

int len_num(long num)
{
	int count;

	count = 0;
	if (num < 0)
	{
		count++;
		num = -num;
	}
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
 * putnbr - printing integer
 * @nb: number
 *
 * Return: void
 */

void putnbr(long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
}

/**
 * print_int - passing int
 * @list: argument
 *
 * Return: the length of the number
 */

int print_int(va_list list)
{
	int n, length;

	n = va_arg(list, int);
	putnbr(n);
	length = len_num(n);
	return (length);
}
