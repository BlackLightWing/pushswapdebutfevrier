# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 10:57:15 by msorbell          #+#    #+#              #
#    Updated: 2023/01/31 11:45:39 by msorbell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.exe

CXXFLAGS = -Wall -Werror -Wextra

SRC = algo.c \
		push_swap_utils.c \
		algo_3.c \
		algo_5.c \
		algo_100.c \
		algo_500.c \
		ft_atoi.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(OBJ):
	gcc -c $(SRC)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
