#include "main.h"

/**
 * bit_len - number of digits of the binary representation of a number.
 * @nb: number.
 *
 * Return: the number of a digits.
 */
int bit_len(unsigned int nb)
{
	int length = 0;

	while (nb != 0)
	{
		length++;
		nb /= 2;
	}
	return (length);
}

/**
 * put_bit - print decimal number in binary.
 * @nb: the number.
 */
void put_bit(unsigned int nb)
{
	if (nb == 0)
		return;
	put_bit(nb / 2);
	ft_putchar(nb % 2 + '0');
}

/**
 * print_bit - print decimal number in binary.
 * @args: list of arguments (to extract the num from it).
 *
 * Return: the number of digits.
 */
int print_bit(va_list args)
{
	unsigned int num;
	int len;

	num = va_arg(args, int);
	if (num == 0)
	{
		ft_putchar('0');
		return (1);
	}
	put_bit(num);
	len = bit_len(num);
	return (len);
}
