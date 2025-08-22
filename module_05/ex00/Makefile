# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/12 13:22:36 by akupesa           #+#    #+#              #
#    Updated: 2025/08/12 13:27:39 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra
INCLUDE = Bureaucrat.hpp

SRCS = main.cpp Bureaucrat.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): all

all: $(INCLUDE) $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME)

%.o: %.cpp $(INCLUDE)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
