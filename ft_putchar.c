#include "main.h"

/**
 * ft_putchar - put a char
 * @c: char
 *
 * Return: void
 */

void ft_putchar(char c)
{
	write(1, &c, 1);
}

