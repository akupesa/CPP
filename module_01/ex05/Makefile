# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/16 15:05:01 by akupesa           #+#    #+#              #
#    Updated: 2025/06/16 15:15:17 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl_2.0

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra
INCLUDE = Harl.hpp

SCRS = main.cpp\
       Harl.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(INCLUDE) $(OBJS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
