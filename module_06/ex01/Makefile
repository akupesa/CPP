# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 15:16:27 by akupesa           #+#    #+#              #
#    Updated: 2025/10/31 15:20:44 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serializer

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra
SRCS = main.cpp Serializer.cpp
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
