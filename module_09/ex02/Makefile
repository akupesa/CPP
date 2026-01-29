# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/09 18:23:20 by akupesa           #+#    #+#              #
#    Updated: 2025/12/09 18:23:22 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pmerge_me

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra

INC = PmergeMe.hpp
SCR = main.cpp PmergeMe.cpp
OBJ = $(SCR:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
%.o: %.cpp $(INC)
	$(CXX) $(CXXFLAGS) $(OBJS) -c $< -o $@
	
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
