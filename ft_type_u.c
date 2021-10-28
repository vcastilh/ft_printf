/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:02:48 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/28 09:00:11 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_u(unsigned int n)
{
	char	*str;
	int		printed_len;

	if (n == 0)
		return (write(1, "0", 1));
	str = ft_uitoa(n);
	printed_len = write(1, str, ft_strlen(str) * sizeof(char));
	free(str);
	return (printed_len);
}
