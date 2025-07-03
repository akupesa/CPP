# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/03 08:30:55 by akupesa           #+#    #+#              #
#    Updated: 2025/07/03 08:44:43 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed_point_number_class

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra
INCLUDE = Fixed.hpp

SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(INCLUDE) $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re
