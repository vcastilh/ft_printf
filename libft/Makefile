# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcastilh <vcastilh@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 10:20:32 by vcastilh          #+#    #+#              #
#    Updated: 2021/10/28 16:46:32 by vcastilh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I. -c
CC = clang
FILES = ft_strlen.c \
		ft_itoa.c \
		ft_strchr.c \
		ft_uitoa.c \
		ft_hex_converter.c \

OBJFILES = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rcs $@ $^

$(OBJFILES): $(FILES)
	$(CC) $(CFLAGS) $^
	
clean:
	rm -f $(OBJFILES)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
