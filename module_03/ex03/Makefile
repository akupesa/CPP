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
CXXFLAGS = -Wall -Werror -Wextra
INCLUDES = ClapTrap.hpp DiamondTrap.hpp FragTrap.hpp ScavTrap.hpp

SRCS = ClapTrap.cpp DiamondTrap.cpp FragTrap.cpp ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(INCLUDES) $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
