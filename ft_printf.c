/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:19:11 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/20 09:44:45 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	argument_pointer;
	int		printed_len;

	va_start(argument_pointer, format);
	printed_len = get_flag(format, argument_pointer);
	va_end(argument_pointer);
	return (len);
}
