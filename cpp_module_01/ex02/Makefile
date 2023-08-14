# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/08/14 14:06:50 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi_this_is_brain

CXX = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

SRCS =	main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) Makefile
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\nhi_this_is_brain updated"

clean :
	$(RM) $(OBJS)
	@echo "\nhi_this_is_brain clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\nhi_this_is_brain fclean done"

re : fclean all

.PHONY : all clean fclean re
