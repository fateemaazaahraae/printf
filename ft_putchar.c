#include "main.h"

/**
 * ft_putchar - put a char
 * @c: char
 *
 * Return: 1
 */

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
