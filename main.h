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
int ft_putchar(char c);

#endif
