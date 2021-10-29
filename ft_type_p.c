/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:06:40 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/29 20:24:58 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_p(unsigned long ptr, int fmt)
{
	unsigned long	aux;
	int				remainder_len;

	aux = ptr;
	if (aux == 0)
	{
		return (write(1, "0x0", 3 * sizeof(char)));
	}
	remainder_len = 0;
	while (aux)
	{
		aux /= 16;
		remainder_len++;
	}
	return (ft_hex_converter(ptr, "0123456789abcdef", remainder_len, fmt));
}
