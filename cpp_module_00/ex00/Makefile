# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/08/08 20:03:27 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nmegaphone updated"

$(OBJS)%.o: $(SRCS)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@


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
