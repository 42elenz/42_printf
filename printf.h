/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenz <elenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 18:18:52 by elenz             #+#    #+#             */
/*   Updated: 2021/08/03 21:08:04 by elenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *s, ...);
int		ft_evaluate(int count, const char *s, va_list argptr, int *re);
void	ft_pputstr(char *s, int *re);
void	ft_pputchar(int c, int *re);
void	ft_pputnbr(int n, int *re);
void	ft_hexnbr(unsigned long n, int up, int *re);
char	*ft_dectohex(unsigned long n, int up);
void	ft_pointer(unsigned long n, int *re);
void	ft_unpputnbr(unsigned int n, int *re);

#endif