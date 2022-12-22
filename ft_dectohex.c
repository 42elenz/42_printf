/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dectohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenz <elenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 18:43:46 by elenz             #+#    #+#             */
/*   Updated: 2021/07/26 16:31:36 by elenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_declen(unsigned long n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

char	*ft_dectohex(unsigned long n, int up)
{
	char	*buf;
	int		i;
	int		declen;

	i = 0;
	declen = ft_declen(n);
	buf = (char *)malloc(sizeof(char) * (declen + 1));
	if (buf == NULL)
		return (NULL);
	if (n == 0)
		buf[i++] = '0';
	while (n)
	{
		if (n % 16 < 10)
			buf[i] = (n % 16) + '0';
		else if (up == 1)
			buf[i] = (n % 16) - 10 + 'A';
		else
			buf[i] = (n % 16) - 10 + 'a';
		i++;
		n = n / 16;
	}
	buf[i] = '\0';
	ft_strrev(buf);
	return (buf);
}
