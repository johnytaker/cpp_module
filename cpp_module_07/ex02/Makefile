# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/10/08 14:11:25 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

INCLUDES =	Array.hpp

TPP = Array.tpp


SRCS =		main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDES) $(TPP) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\narray updated"

%.o: %.cpp $(INCLUDES) $(TPP) Makefile
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\narray clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\narray fclean done"

re : fclean all

val : all
	valgrind --leak-check=full ./$(NAME)

.PHONY : all clean fclean re
