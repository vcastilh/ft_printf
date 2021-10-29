/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:33:37 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/28 17:05:16 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_x(unsigned int n, int fmt)
{
	unsigned int	aux;
	int				remainder_len;
	
	if (n == 0)
		return (write(1, "0", 1));
	aux = n;
	remainder_len = 0;
	while(aux)
	{
		aux /= 16;
		remainder_len++;
	}
	if (fmt == 'x')
		return(ft_hex_converter(n, "0123456789abcdef", remainder_len, fmt));
	return(ft_hex_converter(n, "0123456789ABCDEF", remainder_len, fmt));
}
