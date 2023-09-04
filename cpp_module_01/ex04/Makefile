# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/09/03 23:54:13 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed_if_for_losers

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

SRCS =	main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nsed_if_for_losers updated"

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	@echo "\nsed_if_for_losers clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nsed_if_for_losers fclean done"

re : fclean all

leak : all
	leaks -atExit -- ./$(NAME)

.PHONY : all clean fclean re leak
