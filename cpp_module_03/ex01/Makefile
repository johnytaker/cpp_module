# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/08/28 20:16:54 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clap_trap

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
	@echo "\nclap_trap updated"

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\nclap_trap clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nclap_trap fclean done"

re : fclean all

.PHONY : all clean fclean re
