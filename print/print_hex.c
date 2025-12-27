/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:02:47 by pedrferr          #+#    #+#             */
/*   Updated: 2025/08/14 21:02:49 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printupperhex(unsigned int n, int *i)
{
	ft_phexadecimal(n, 'X', i);
}

void	ft_printhex(unsigned int n, int *i)
{
	ft_phexadecimal(n, 'x', i);
}
