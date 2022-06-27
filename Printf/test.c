#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], sizeof(s[i]));
		i++;
	}
}

int     ft_atoi(const char *str)
{
        int     i;
        int     real_num;
        int     sign;

        sign = 1;
        i = 0;
        real_num = 0;
        while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
                || str[i] == '\r' || str[i] == ' ' || str[i] == '+' || str[i] == '-')
        {
                if (str[i] == '-')
                        sign = -sign;
                if ((str[i] == '-' || str[i] == '+') && (str[i + 1] == '\t'
                                || str[i + 1] == '\n' || str[i + 1] == '\v'
                                || str[i + 1] == '\r' || str[i + 1] == ' '
                                || str[i + 1] == '-' || str[i + 1] == '+'))
                        return (0);
                i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
                real_num = real_num * 10 + (str[i] - 48);
                i++;
        }
        return (sign * real_num);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}

void    ft_putnbr_fd(int n, int fd)
{
        if (n == -2147483648)
                ft_putstr_fd("-2147483648", fd);
        else
        {
                if (n < 0)
                {
                        n = -n;
                        ft_putchar_fd('-', fd);
                }
                if (n < 10)
                {
                        ft_putchar_fd(48 + n, fd);
                }
                else
                {
                        ft_putnbr_fd(n / 10, fd);
                        ft_putnbr_fd(n % 10, fd);
                }
        }
}

int ft_printf(char const *cadena, ...)
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
