# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/10/03 21:05:31 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

INCLUDES =	ScalarConverter.hpp

SRCS =		ScalarConverter.cpp	\
			main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nconvert updated"

%.o: %.cpp $(INCLUDES) Makefile
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\nconvert clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nconvert fclean done"

re : fclean all

# val : all
# 	valgrind --leak-check=full ./$(NAME)

.PHONY : all clean fclean re
