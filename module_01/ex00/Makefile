# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 16:26:00 by akupesa           #+#    #+#              #
#    Updated: 2025/05/15 16:38:44 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

CC = c++

CFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp \
	Zombie.cpp

OBJ = $(SRCS: .cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(SRCS) $(OBJ)


all: $(NAME) 

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o %@

clean: rm -rf 
	$(OBJ)

fclean: clean
	$(NAME)

re: fclean all

.PHONY: all clean fclean re
