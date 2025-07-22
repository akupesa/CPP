# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 14:02:18 by akupesa           #+#    #+#              #
#    Updated: 2025/07/09 14:05:55 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = repetitive_work

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
INCLUDES = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(INCLUDES) $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)


fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
