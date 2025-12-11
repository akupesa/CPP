# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/09 14:22:23 by akupesa           #+#    #+#              #
#    Updated: 2025/12/09 14:22:24 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra

SRC = main.cpp RPN.cpp
INC = RPN.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re