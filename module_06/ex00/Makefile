# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 11:06:02 by akupesa           #+#    #+#              #
#    Updated: 2025/10/22 11:29:08 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = conversor

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
INCLUDE = ScalarConverter.hpp
SRC = main.cpp ScalarConverter.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INCLUDE)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
