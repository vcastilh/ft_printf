/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:20:11 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/28 11:44:24 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"
int		ft_printf(const char *format, ...);
int		type_c(int c);
int		type_s(char *str);
int		type_p(unsigned long ptr);
int		type_d(int n);
int		type_u(unsigned int n);
#endif
