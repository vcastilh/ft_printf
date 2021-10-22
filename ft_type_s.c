/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:38:38 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/22 15:26:22 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_s(char *str)
{
	int	printed_len;

	printed_len = 0;
	if (!str)
	{
		printed_len += write(1, "(null)", 6);
		return (printed_len);
	}
	else
	{
		printed_len += write(1, str, ft_strlen(str) * sizeof(char));
		return (printed_len);
	}
	return (NULL);
}
