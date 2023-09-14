# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/09/13 16:44:04 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scav_trap

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

INCLUDES =	ClapTrap.hpp	\
			ScavTrap.hpp

SRCS =		ClapTrap.cpp	\
			ScavTrap.cpp	\
			main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nscav_trap updated"

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\nscav_trap clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nscav_trap fclean done"

re : fclean all

val : all
	valgrind --leak-check=full ./$(NAME)

.PHONY : all clean fclean re val
