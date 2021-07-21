#include <stdarg.h>
#include <stdio.h>
#include "/Users/elenz/Documents/42/ex1/libft/libft.h"

int	ft_pputnbr_fd(long int i, int base, int ox, int up)
{

}


int	ft_pputstr_fd(char *s, int fd)
{
	int	i;
	int	re;

	i = 0;
	re = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			re += write(fd, &s[i], 1);
			i++;
		}
	}
	return (re);
}

int	ft_pputchar_fd(int c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_evaluate_inst(int count, const char *s, va_list argptr)
{
	int	re;

	if (s[count] == 's')
		ft_pputstr_fd(va_arg(argptr, char*), 1);
	else if (s[count] == 'c')
		re = ft_pputchar_fd((char)va_arg(argptr, int), 1);
	else if (s[count] == 'i')
		ft_pputnbr_fd(va_arg(argptr, int), 1, 10, 0);
	else if (s[count] == 'd')
		ft_pputnbr_fd(va_arg(argptr, int), 1, 10, 0);
	return (re);
}

int	ft_printf(const char *s, ...)
{
	int		count;
	va_list	argptr;

	count = 0;
	va_start(argptr, s);
	while (s[count] != '\0')
	{
		while (s[count] == '%')
		{	
			ft_evaluate_inst(count + 1, s, argptr);
			if (s[count + 2] != '\0')
				count += 2;
			if (s[count + 2] == '\0')
				return (0);
		}
		ft_putchar_fd(s[count], 1);
		count++;
	}
	va_end(argptr);
	return (0);
}

int main()
{
	void *s;

	s = "OK";
	ft_printf("%s%s Hallo ich heisse %c %i %d %p", "Esra", "Lenz", 'E', 30, 55, s);
	//printf("%p", s);
	return 0;
}
