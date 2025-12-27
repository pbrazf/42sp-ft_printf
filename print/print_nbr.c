/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:02:59 by pedrferr          #+#    #+#             */
/*   Updated: 2025/08/14 21:03:00 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printint(int n, int *i)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_printchar('-', i);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_printint(nbr / 10, i);
	}
	ft_printchar((nbr % 10) + '0', i);
}

void	ft_printuint(unsigned int n, int *i)
{
	if (n >= 10)
	{
		ft_printuint(n / 10, i);
	}
	ft_printchar((n % 10) + '0', i);
}
