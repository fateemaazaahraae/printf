#include "main.h"

/**
 * print_bit - this function print int in binary
 * @list: list of arguments
 *
 * Return: length
 */

int print_bit(va_list list)
{
	unsigned int octet;
	unsigned int i;
	int length;

	i = 128;
	length = 0;
	octet = va_arg(list, unsigned int);
	while (i >= 1)
	{
		length += ft_putchar((!!(octet & i)) + '0');
		i = i >> 1;
	}
	return (length);
}
