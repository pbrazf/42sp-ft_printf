/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <pedrferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 21:50:02 by pedrferr          #+#    #+#             */
/*   Updated: 2025/08/18 21:50:04 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_phexadecimal(unsigned long long n, char type, int *i)
{
	char	*hex;
	char	c;
	int		rest;

	if (n == 0)
	{
		ft_printchar('0', i);
		return ;
	}
	hex = "0123456789ABCDEF";
	if (type == 'x')
		hex = "0123456789abcdef";
	if (n != 0)
	{
		if (n / 16 != 0)
			ft_phexadecimal(n / 16, type, i);
	}
	rest = n % 16;
	c = *(hex + rest);
	ft_printchar(c, i);
}
