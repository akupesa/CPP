# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa  <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/03 16:35:15 by akupesa           #+#    #+#              #
#    Updated: 2025/06/04 16:29:58 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessaryViolence

CC = c++

CFLAGS = -Wall -Werror -Wextra

INCLUDES = HumanA.hpp \
	   HumanB.hpp \
	   Weapon.hpp

SRCS = main.cpp \
       HumanA.cpp \
       HumanB.cpp \
       Weapon.cpp

OBJ = $(SRCS:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
