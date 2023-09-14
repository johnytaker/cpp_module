# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/09/14 13:16:01 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = frag_trap

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

INCLUDES =	ClapTrap.hpp	\
			ScavTrap.hpp	\
			FragTrap.hpp

SRCS =		ClapTrap.cpp	\
			ScavTrap.cpp	\
			FragTrap.cpp	\
			main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nfrag_trap updated"

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\nfrag_trap clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nfrag_trap fclean done"

re : fclean all

val : all
	valgrind --leak-check=full ./$(NAME)

.PHONY : all clean fclean re val
