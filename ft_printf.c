/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:19:11 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/20 15:36:31 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	identify_flag(const char *fmt, va_list ap)
{
	if (*fmt == 'c')
		return (type_c(va_arg(ap, int)));
	else if (*fmt == 's')
		return (type_s(va_arg(ap, char *)));
}

int	get_flag(const char *fmt, va_list ap)
{
	int	printed_len;

	printed_len = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{	
			printed_len += identify_flag(++fmt, ap);
		}
		else
		{
			printed_len += write(1, fmt, 1);
			fmt++;
		}
	}
	return (printed_len);
}


int	ft_printf(const char *format, ...)
{
	va_list	argument_pointer;
	int		printed_len;

	va_start(argument_pointer, format);
	printed_len = get_flag(format, argument_pointer);
	va_end(argument_pointer);
	return (len);
}
