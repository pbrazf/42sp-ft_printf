/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:03:28 by pedrferr          #+#    #+#             */
/*   Updated: 2025/08/14 21:03:30 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_printptr(void *p, int *i)
{
	unsigned long long	long_p;

	if (p == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		(*i) += 5;
		return ;
	}

	long_p = (unsigned long long)p;
	ft_printstr("0x", i);
	ft_phexadecimal(long_p, 'x', i);
}

