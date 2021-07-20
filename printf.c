#include <stdarg.h>
#include <stdio.h>
#include "/Users/elenz/Documents/42/ex1/libft/libft.h"

int	ft_evaluate_inst(int count, const char *s, va_list argptr)
{
	void	*p;

	if (s[count] == 's')
		ft_putstr_fd(va_arg(argptr, char*), 1);
	if (s[count] == 'c')
		ft_putchar_fd((char)va_arg(argptr, int), 1);
	if (s[count] == 'i')
		ft_putnbr_fd(va_arg(argptr, int), 1);
	if (s[count] == 'p')
	{
		p = (va_arg(argptr, char*));
		ft_putstr_fd(p, 1);
	}
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		count;
	va_list	argptr;

	count = 0;
	va_start(argptr, s);
	while (s[count] != '\0')
	{
		if (s[count] == '%')
		{	
			ft_evaluate_inst(count + 1, s, argptr);
			if (s[count + 2] != '\0')
				count += 2;
			if (s[count + 2] == '\0')
				break ;
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
	ft_printf("Hallo ich heisse %s %c %i %p", "Esra", 'E', 30, s);
	printf("%p", s);
	return 0;
}


/* 
int summum(int num, ...)
{
	int sum = 0;
	int count = 0;

	va_list argptr;
	va_start(argptr, num);
	while(count < num)
	{
		sum += va_arg(argptr, int);
		count++;
	}
	va_end(argptr);
	return sum;
}


int main(int argc, char *argv)
{
	int total;

	total = sumnum( 4, 3, 7, 6, 4);

	return 0;
} */