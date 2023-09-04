# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/09/03 23:52:14 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

INCLUDES =	Brain.hpp		\
			Animal.hpp		\
			Cat.hpp			\
			Dog.hpp			\
			WrongAnimal.hpp	\
			WrongCat.hpp

SRCS =		Brain.cpp		\
			Animal.cpp		\
			Cat.cpp			\
			Dog.cpp			\
			main.cpp		\
			WrongAnimal.cpp	\
			WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nanimal updated"

%.o: %.cpp $(INCLUDES) Makefile
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\nanimal clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nanimal fclean done"

re : fclean all

leak : all
	leaks -atExit -- ./$(NAME)


.PHONY : all clean fclean re leak
