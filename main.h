#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct a - struct
 * @specefier: the format specefier
 * @f: pointer to function
 *
 */

typedef struct a
{
	char *specefier;
	int (*f)();
}	b;

int _printf(const char *format, ...);
void ft_putchar(char c);
int print_int(va_list list);
int print_string(va_list list);
int ft_strlen(char *str);
int print_sign(void);
int print_char(va_list list);
int print_unsigned(va_list list);
int print_rev_str(va_list list);
int print_rot13(va_list list);
int print_Str(va_list list);
#endif
