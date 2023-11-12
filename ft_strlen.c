#include "main.h"

/**
 * ft_strlen - calculate the length
 * @str: string
 *
 * Return: the length of str
 */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

