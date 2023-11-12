#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

typedef struct a
{
	char *specefier;
	int (*f)();
}	b;

int _printf(const char *format, ...);
void ft_putchar(char c);
int print_string(va_list list);
int print_sign(void);
int print_char(va_list list);

#endif
