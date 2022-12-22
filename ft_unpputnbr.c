/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unpputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenz <elenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 19:03:20 by elenz             #+#    #+#             */
/*   Updated: 2021/07/24 19:19:09 by elenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_unpputnbr(unsigned int n, int *re)
{
	char	*string;

	string = ft_utoa(n);
	if (string == NULL)
	{	
		*re = -1;
		return ;
	}
	ft_pputstr(string, re);
	free (string);
}
