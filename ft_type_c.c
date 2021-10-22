/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:19:17 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/20 11:25:31 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	type_c(int c)
{
	int	printed_len;

	printed_len = write(1, &c, 1);
	return (printed_len);
}
