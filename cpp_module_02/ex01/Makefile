# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/09/03 23:53:16 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fp_numbers

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

INCLUDES =	Fixed.hpp

SRCS =		Fixed.cpp	\
			main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nfp_numbers updated"

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\nfp_numbers clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nfp_numbers fclean done"

re : fclean all

leak : all
	leaks -atExit -- ./$(NAME)

.PHONY : all clean fclean re leak
