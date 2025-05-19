# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/18 18:53:17 by akupesa           #+#    #+#              #
#    Updated: 2025/05/18 19:00:37 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = moarBrainz

CC = g++

CFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp \
       Zombie.cpp \
       zombieHorde.cpp

OBJ = $(SRCS:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean: 
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
