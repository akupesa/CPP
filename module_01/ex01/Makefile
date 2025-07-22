# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/18 18:53:17 by akupesa           #+#    #+#              #
#    Updated: 2025/05/18 19:00:37 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = moarBrainz

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
INCLUDES = Zombie.hpp

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(INCLUDES) $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

clean: 
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
