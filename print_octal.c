#include "main.h"

/**
 * len_octal - calculate the length
 * @num: int
 *
 * Return: length
 */

int len_octal(unsigned long int num)
{
	int count;

	count = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		count++;
		num = num / 8;
	}
	return (count);
}

/**
 * put_octal - prints int in base octal
 * @nb:
 *
 * Return: void
 */

void put_octal(unsigned long int nb)
{
	if (nb < 8)
		ft_putchar(nb + '0');
	else
	{
		put_octal(nb / 8);
		put_octal(nb % 8);
	}
}

/**
 * print_octal - prints int in base octal
 * @list: argument
 *
 * Return: length of int
 */

int print_octal(va_list list)
{
	unsigned long int num;
	int length;

	num = va_arg(list, unsigned int);
	put_octal(num);
	length = len_octal(num);
	return (length);
}
