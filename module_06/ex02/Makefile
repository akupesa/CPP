# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/05 10:38:41 by akupesa           #+#    #+#              #
#    Updated: 2025/11/05 10:38:44 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = base

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp
INCLUDES = Base.hpp A.hpp B.hpp C.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

