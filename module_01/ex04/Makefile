# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/12 16:34:25 by akupesa           #+#    #+#              #
#    Updated: 2025/06/12 16:41:31 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

INCLUDE = Sed.hpp

SRCS = main.cpp Sed.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(INCLUDE) $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDE)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
