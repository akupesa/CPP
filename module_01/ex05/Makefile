# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/16 15:05:01 by akupesa           #+#    #+#              #
#    Updated: 2025/06/17 16:29:29 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl_2.0

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra
INCLUDE = Harl.hpp

SRCS = main.cpp \
       Harl.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(INCLUDE) $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
