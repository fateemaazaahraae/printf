#include "main.h"

/**
 * print_char - this function prints char
 * @list: list of argument
 *
 * Return: (1)
 */


int	print_char(va_list list)
{
	char ch;
	
	ch = va_arg(list, int);
	ft_putchar(ch);
	return (1);
}
