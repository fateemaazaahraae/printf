#include "main.h"

/**
 * print_Str - prints string and non printable characters in hexadecimal
 * @list: argument
 *
 * Return: length of the string
 */

int print_Str(va_list list)
{
        char *str;
        char *hexa;
        int i;
        int check;

        str = va_arg(list, char *);
        hexa = "0123456789ABCDEF";
        if (str == NULL)
                str = "(null)";
        i = 0;
        check = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 32 && str[i] < 127)
                        ft_putchar(str[i]);
                else
                {
                        write(1, "\\x", 2);
                        ft_putchar(hexa[(unsigned char)str[i] / 16]);
                        ft_putchar(hexa[(unsigned char)str[i] % 16]);
                        check = 1;
                }
                i++;
        }
        if (check == 1)
                i += 2;
        return (i);
}
