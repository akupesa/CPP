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

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

HEADER = Zombie.hpp

SRCS = main.cpp \
	Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp

OBJ = $(SRCS:%.cpp=%.o)

all: $(NAME) 

$(NAME): $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

# %.o: %.cpp 
# 	$(C) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
