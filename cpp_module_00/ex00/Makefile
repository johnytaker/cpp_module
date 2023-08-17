# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/08/14 19:28:02 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nmegaphone updated"

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\nmegaphone clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nmegaphone fclean done"

re : fclean all

test1: all
	./$(NAME) "shhhhh... I think the students are asleep..."

test2: all
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."

test3: all
	./$(NAME)

.PHONY : all clean fclean re test1 test2 test3
