/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrferr <pedrferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:12:03 by pedrferr          #+#    #+#             */
/*   Updated: 2025/08/11 18:12:04 by pedrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_printchar(char c, int *i);
void	ft_printstr(char *s, int *i);
void	ft_printpct(int *i);
void	ft_printint(int n, int *i);
void	ft_printuint(unsigned int n, int *i);
void	ft_printhex(unsigned int n, int *i);
void	ft_printupperhex(unsigned int n, int *i);
void	ft_printptr(void *p, int *i);
void	ft_phexadecimal(unsigned long long n, char type, int *i);
void	ft_management_arg(const char **format, va_list args, int *i);

#endif
