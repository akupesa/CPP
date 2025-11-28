# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 13:11:12 by akupesa           #+#    #+#              #
#    Updated: 2025/11/28 13:15:59 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutated_abomination

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra

INC = MutantStack.hpp
SRC = main.cpp MutantStack.tpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CXX) $(CXXFLAGS) -c $< -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
