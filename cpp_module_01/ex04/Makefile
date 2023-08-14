# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/08/14 14:19:25 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed_if_for_losers

CXX = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

SRCS =	main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nsed_if_for_losers updated"

clean :
	$(RM) $(OBJS)
	@echo "\nsed_if_for_losers clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nsed_if_for_losers fclean done"

re : fclean all

.PHONY : all clean fclean re
