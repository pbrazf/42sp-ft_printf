/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:03:36 by pedrferr          #+#    #+#             */
/*   Updated: 2025/08/14 21:03:39 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_printstr(char *s, int *i)
{
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		(*i) += 6;
		return ;
	}
	(*i) += ft_strlen(s);
	ft_putstr_fd(s, 1);
}
