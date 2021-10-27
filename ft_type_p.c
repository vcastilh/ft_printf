/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:06:40 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/27 16:52:57 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf.h"

int	hex_converter(unsigned long ptr, char *base, int len)
{
	char	*str;
	int		printed_len;

	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	while (ptr)
	{
		str[--len] = base[ptr % 16];
		ptr /= 16;
	}
	printed_len = 0;
	printed_len += write(1, "0x", 2);
	printed_len += write(1, str, ft_strlen(str) * sizeof(char));
	free(str);
	return (printed_len);
}

int	type_p(unsigned long ptr)
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
	return(hex_converter(ptr, "0123456789abcdef", remainder_len));
}
