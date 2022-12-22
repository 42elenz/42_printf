/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evaluate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenz <elenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 18:17:42 by elenz             #+#    #+#             */
/*   Updated: 2021/07/25 11:40:14 by elenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_evaluate(int count, const char *s, va_list argptr, int *re)
{
	if (s[count] == 's')
		ft_pputstr(va_arg(argptr, char *), re);
	else if (s[count] == 'c')
		ft_pputchar((char)va_arg(argptr, int), re);
	else if (s[count] == 'i' || s[count] == 'd')
		ft_pputnbr(va_arg(argptr, int), re);
	else if (s[count] == 'u')
		ft_unpputnbr(va_arg(argptr, unsigned int), re);
	else if (s[count] == 'x')
		ft_hexnbr(va_arg(argptr, unsigned int), 0, re);
	else if (s[count] == 'X')
		ft_hexnbr(va_arg(argptr, unsigned int), 1, re);
	else if (s[count] == '%')
		*re += write(1, "%", 1);
	else if (s[count] == 'p')
		ft_pointer(va_arg(argptr, unsigned long), re);
	else
		return (0);
	return (1);
}
