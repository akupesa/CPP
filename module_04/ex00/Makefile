# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/14 15:35:00 by akupesa           #+#    #+#              #
#    Updated: 2025/07/14 15:40:17 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = poly

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra
INCLUDES = Cat.hpp Dog.hpp

SRCS = main.cpp Cat.cpp Dog.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(INCLUDES) $(OBJS)
	$(CXX) $(CXXFLAGS) $(SRCS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
