# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shulley <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 10:08:46 by shulley           #+#    #+#              #
#    Updated: 2017/05/22 10:21:53 by shulley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = clang++

FLAGS = -Wall -Werror -Wextra

NAME = megaphone

SRC = megaphone.cpp

all: $(NAME)
	@$(COMPILER) -o $(NAME) $(SRC)
	@echo "compile successful"
clean:
	@rm $(NAME)

re: clean all
