#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

struct a
{
	char *specefier;
	int (*f)();
};

int _printf(const char *format, ...);
void ft_putchar(char c);
int print_string(va_list list);
int ft_strlen(char *str);
int print_sign(void);
int print_char(va_list list);

#endif
