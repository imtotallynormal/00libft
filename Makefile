# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kialvare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/26 17:52:17 by kialvare          #+#    #+#              #
#    Updated: 2016/09/26 17:57:33 by kialvare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
	  ft_isprint.c ft_memchr.c ft_memcpy.c ft_memset.c ft_putchar.c\
	  ft_putstr.c ft_strlen.c ft_tolower.c ft_toupper.c\
OBJ = $(patsubst%.c,%.o,$(SRC:.c=.o))
CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
LIB = ar rc libft.a
REORG = ranlib libft.a
DELETE = $(OBJ)*.gch

all: $(NAME)

$(NAME):$(SRC)
	$(CC) $(CFLAGS) $(SRC)
	$(LIB) $(OBJ)
	$(REORG)

.PHONY: clean

clean:
	rm -f $(DELETE)
fclean: clean
	rm -f $(DELETE)
re: fclean all
