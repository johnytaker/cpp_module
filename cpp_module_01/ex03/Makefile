# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/09/03 23:54:05 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessary_violence

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

INCLUDES =	HumanA.hpp	\
			HumanB.hpp	\
			Weapon.hpp

SRCS =		HumanA.cpp	\
			HumanB.cpp	\
			main.cpp	\
			Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nunnecessary_violence updated"

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\nunnecessary_violence clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nunnecessary_violence fclean done"

re : fclean all

leak : all
	leaks -atExit -- ./$(NAME)

.PHONY : all clean fclean re leak
