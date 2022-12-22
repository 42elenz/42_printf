/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenz <elenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 11:40:31 by elenz             #+#    #+#             */
/*   Updated: 2021/07/24 18:56:23 by elenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_hexnbr(unsigned long n, int up, int *re)
{
	char	*string;

	string = ft_dectohex(n, up);
	if (string == NULL)
	{
		*re = -1;
		return ;
	}
	ft_pputstr(string, re);
	free (string);
}
