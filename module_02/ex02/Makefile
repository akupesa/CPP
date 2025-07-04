# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/04 10:59:47 by akupesa           #+#    #+#              #
#    Updated: 2025/07/04 11:05:58 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = now_we're_talking

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra
INCLUDE = Fixed.hpp

SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(INCLUDE) $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(OBJS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
