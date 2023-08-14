# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iugolin <iugolin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 18:09:12 by iugolin           #+#    #+#              #
#    Updated: 2023/08/14 13:03:27 by iugolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = crappybook

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = @rm -rf

INCLUDES =	Contact.class.hpp	\
			PhoneBook.class.hpp	\
			PhoneBook.utils.hpp


SRCS =		Contact.class.cpp 	\
			PhoneBook.class.cpp	\
			PhoneBook.utils.cpp	\
			main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(INCLUDES) Makefile
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\ncrappybook updated"


clean :
	$(RM) $(OBJS)
	@echo "\ncrappybook clean done"

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@echo "\ncrappybook fclean done"

re : fclean all

.PHONY : all clean fclean re
