/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:20:11 by vcastilh          #+#    #+#             */
/*   Updated: 2021/10/26 10:48:03 by vcastilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
int		ft_printf(const char *format, ...);
int		type_c(int c);
int		type_s(char *str);
int		type_p(unsigned long ptr);
size_t	ft_strlen(const char *str);
#endif
