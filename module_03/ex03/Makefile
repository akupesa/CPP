# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 15:32:04 by akupesa           #+#    #+#              #
#    Updated: 2025/07/09 15:42:56 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamond

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
INCLUDES = ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp

SRCS = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(INCLUDES) $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
