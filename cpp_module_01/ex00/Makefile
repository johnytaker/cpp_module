# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/08/13 12:09:55 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

CXX = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

INCLUDES =	Zombie.hpp


SRCS =		newZombie.cpp 	\
			randomChump.cpp	\
			Zombie.cpp		\
			main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nBraiiiiiiinnnzzzZ updated"

# $(OBJS)%.o: $(SRCS)%.cpp
# 	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\nBraiiiiiiinnnzzzZ clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nBraiiiiiiinnnzzzZ fclean done"

re : fclean all

.PHONY : all clean fclean re
