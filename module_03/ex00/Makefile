# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/07 16:21:58 by akupesa           #+#    #+#              #
#    Updated: 2025/07/25 14:52:29 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = aaaaaand

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
INCLUDE = ClapTrap.hpp

SRCS = main.cpp ClapTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDE)
	$(CXX) -c $(CXXFLAGS) $< -o $@
	
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
