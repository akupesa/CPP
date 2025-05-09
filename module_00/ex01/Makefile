# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 16:32:42 by akupesa           #+#    #+#              #
#    Updated: 2025/05/07 16:41:21 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyAgenda

CC = c++
CFLAGS =

SRC =	main.cpp \
	Contact.cpp \
	PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	
all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -rf $(OBJ)

fclean: 
	rm -rf $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
