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
int ft_putchar(char c);
int print_int(va_list list);
int print_string(va_list list);
int ft_strlen(char *str);
int print_sign(void);
int print_char(va_list list);
int print_unsigned(va_list list);
int print_rev_str(va_list list);
int print_rot13(va_list list);
int print_Str(va_list list);
int print_hexa_lower(va_list list);
int print_hexa_upper(va_list list);
<<<<<<< HEAD
=======
int print_bit(va_list list);
>>>>>>> 3197a0fb0276a2866ff7d96b5e04da23491bcfea
int print_octal(va_list list);
#endif
