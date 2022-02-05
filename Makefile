# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeser <aeser@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/05 15:25:23 by aeser             #+#    #+#              #
#    Updated: 2022/02/05 15:40:48 by aeser            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= get_next_line
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror -I.
FILES	:= $(shell find . -type f ! -name "*bonus*.c" -name "get_next_line*.c")
OBJ		:= $(FILES:%.c=%.o)

BSRC	:= $(wildcard *bonus*.c)
B_OBJ	:= $(BSRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

bonus: $(OBJ) $(B_OBJ)
	$(CC) -o $(NAME:%.c=%_bonus.c)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
