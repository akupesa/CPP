# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 16:26:00 by akupesa           #+#    #+#              #
#    Updated: 2025/05/28 13:17:46 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

CC = c++

CFLAGS = -g -Wall -Werror -Wextra

HEADER = Zombie.hpp

SRCS = main.cpp \
	Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp

OBJ = $(SRCS:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


all: $(NAME) 

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $(SRCS)

clean: 
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
