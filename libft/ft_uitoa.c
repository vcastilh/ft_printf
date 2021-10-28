/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 22:18:31 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/28 11:01:25 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



int	digit_counter(unsigned int	n)
{
	size_t	len;
	
	len = 0;
	if (n == 0)
	{
		len = 1;
		return (len);
	}
	while(n)
	{
		n /= 10;
		len++;
	}
	return (len);

}

char	*ft_uitoa(unsigned int n)
{
	char			*str;
	int				n_digits;

	n_digits = digit_counter(n);
	str = malloc((n_digits + 1) * sizeof(char));
	if (!str)
		return (0);
	str[n_digits] = '\0';
	while (n_digits--)
	{
		str[n_digits] = n % 10 + 48;
		n /= 10;
	}
	return (str);
}
