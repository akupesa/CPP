# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa  <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/03 16:35:15 by akupesa           #+#    #+#              #
#    Updated: 2025/06/04 16:29:58 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessaryViolence

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

INCLUDES = HumanA.hpp HumanB.hpp Weapon.hpp

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(INCLUDES) $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
