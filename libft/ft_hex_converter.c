/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_converter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:43:09 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/28 17:05:58 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hex_converter(unsigned long ptr, char *base, int len, int fmt)
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
	if (fmt == 'p')
		printed_len += write(1, "0x", 2);
	printed_len += write(1, str, ft_strlen(str) * sizeof(char));
	free(str);
	return (printed_len);
}
