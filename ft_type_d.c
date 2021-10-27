/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:19:04 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/27 16:49:32 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_d(int	numb)
{
	char	*str;
	int		printed_len;

	if (numb == 0)
		return (write(1, "0", 1));
	str = ft_itoa(numb);
	printed_len = 0;
	printed_len += write(1, str, ft_strlen(str) * sizeof(char));
	free(str);
	return (printed_len);
}
