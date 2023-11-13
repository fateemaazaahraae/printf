#include "main.h"

/**
 * bit_len - number of digits of the binary representation of a number.
 * @num: thr number.
 *
 * Return: the number of a digits.
 */
int bit_len(unsigned int num)
{
	int len = 0;

	while (num != 0)
	{
		len++;
		num /= 2;
	}
	return (len);
}

/**
 * put_bit - print decimal number in binary.
 * @num: the number.
 */
void put_bit(unsigned int num)
{
	if (num == 0)
		return;
	put_bit(num / 2);
	_putchar(num % 2 + '0');
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
		_putchar('0');
		return (1);
	}
	put_bit(num);
	len = bit_len(num);
	return (len);
}
