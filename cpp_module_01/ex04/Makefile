# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/08/13 18:43:25 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessary_violence

CXX = g++

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

# $(OBJS)%.o: $(SRCS)%.cpp
# 	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\nunnecessary_violence clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nunnecessary_violence fclean done"

re : fclean all

.PHONY : all clean fclean re
