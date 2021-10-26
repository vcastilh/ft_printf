/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:19:17 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/25 20:03:58 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_c(int c)
{
	int	printed_len;

	printed_len = write(1, &c, 1);
	return (printed_len);
}
