/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenz <elenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:00:32 by elenz             #+#    #+#             */
/*   Updated: 2021/08/04 20:24:31 by elenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *s, ...)
{
	int		count;
	int		re;
	va_list	argptr;

	count = 0;
	re = 0;
	va_start(argptr, s);
	while (s[count] != '\0')
	{
		if (s[count] == '%')
		{	
			if (ft_evaluate(count + 1, s, argptr, &re) != 0)
				count += 2;
		}
		else
		{
			ft_pputchar (s[count], &re);
			count++;
		}
	}
	va_end(argptr);
	return (re);
}
