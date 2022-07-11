#include <stdarg.h>
#include <stdio.h>

// Needs to be included libft library, but a Makefile is needed
#include "libft.h"

// To run it, add the functions needed in this program: gcc test.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c

// use of ssize_t because is used for BUFFER capacity which is our string [-1, MAXINT] because is sexy
ssize_t ft_printf(char const *cadena, ...)
{
    int i;
    va_list va_ptr;

    i = 0;
    va_start(va_ptr, cadena);

    while (cadena[i] != '\0')
    {
        if (cadena[i] == '%')
        {
            if (cadena[i + 1] == 'd')
            {
                ft_putnbr_fd(va_arg(va_ptr, int), 1);
            }
            else if (cadena[i + 1] == 'c')
            {
                ft_putchar_fd(va_arg(va_ptr, int), 1);
            }
            i++;
        }
        else
        {
            ft_putchar_fd(cadena[i], 1);
        }
        i++;
    }
    va_end(va_ptr);
    return (i);
}

int main(void)
{
    int grados = 7;
    printf("%d\n", ft_printf("Mi cuarto queda %d grados bajo %c\n", grados, '0'));
    printf("%d\n", printf("Mi cuarto queda %d grados bajo %c\n", grados, '0')); 
    return (0);
}
