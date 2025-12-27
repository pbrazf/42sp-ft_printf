/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   managment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <pedrferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:11:21 by pedrferr          #+#    #+#             */
/*   Updated: 2025/08/25 17:11:27 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_management_arg(const char **format, va_list args, int *i)
{
	if (**format == '%')
	{
		(*format)++;
		if (**format == '%')
			ft_printpct(i);
		else if (**format == 'c')
			ft_printchar(va_arg(args, int), i);
		else if (**format == 's')
			ft_printstr(va_arg(args, char *), i);
		else if (**format == 'i' || **format == 'd')
			ft_printint(va_arg(args, int), i);
		else if (**format == 'u')
			ft_printuint(va_arg(args, unsigned int), i);
		else if (**format == 'x')
			ft_printhex(va_arg(args, unsigned int), i);
		else if (**format == 'X')
			ft_printupperhex(va_arg(args, unsigned int), i);
		else if (**format == 'p')
			ft_printptr(va_arg(args, void *), i);
	}
	else
		ft_printchar(**format, i);
}
