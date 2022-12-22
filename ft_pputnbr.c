/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenz <elenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 18:36:31 by elenz             #+#    #+#             */
/*   Updated: 2021/07/24 18:55:20 by elenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_pputnbr(int n, int *re)
{
	char	*string;

	string = ft_itoa(n);
	if (string == NULL)
	{	
		*re = -1;
		return ;
	}
	ft_pputstr(string, re);
	free (string);
}
