# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 11:37:02 by aguiot--          #+#    #+#              #
#    Updated: 2018/11/07 16:12:55 by aguiot--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDES = ./
CFLAGS += -Wall -Wextra -Werror
SRC = ft_putchar_fd.c ft_putchar.c ft_putstr_fd.c ft_putstr.c ft_putnbr_fd.c \
	  ft_putnbr.c ft_strlen.c ft_strcpy.c  ft_strncpy.c ft_strdup.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -I $(INCLUDES) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
