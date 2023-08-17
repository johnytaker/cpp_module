# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/08/14 19:27:44 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_brainz

CXX = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

INCLUDES =	Zombie.hpp


SRCS =		Zombie.cpp		\
			zombieHorde.cpp	\
			main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nMoar_brainz updated"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\nMoar_brainz clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nMoar_brainz fclean done"

re : fclean all

.PHONY : all clean fclean re
