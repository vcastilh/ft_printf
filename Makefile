# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 20:06:40 by vcastilh          #+#    #+#              #
#    Updated: 2021/10/27 17:41:41 by vcastilh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTDIR = ./libft/
LIBFT = libft.a
INCLUDES = -I$(LIBFTDIR) -I.
CC = clang
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror -c
SRCFILES = ft_printf.c \
		   ft_type_c.c \
		   ft_type_s.c \
		   ft_type_p.c \
		   ft_type_d.c

OBJFILES = ${SRCFILES:%.c=%.o}

all: $(NAME)

$(NAME): $(OBJFILES) $(LIBFTDIR)$(LIBFT)
	cp $(LIBFTDIR)/$(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJFILES)

$(OBJFILES): $(SRCFILES)
	$(CC) $(CFLAGS) $(INCLUDES) $^

$(LIBFTDIR)$(LIBFT):
	make -C $(LIBFTDIR)

clean:
	rm -f $(OBJFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
