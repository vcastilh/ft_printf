# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 20:06:40 by vcastilh          #+#    #+#              #
#    Updated: 2021/10/28 15:52:55 by vcastilh         ###   ########.fr        #
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
		   ft_type_d.c \
		   ft_type_u.c \
		   ft_type_x.c

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
	make clean -C $(LIBFTDIR)
fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFTDIR)
re: fclean all

.PHONY: all clean fclean re
