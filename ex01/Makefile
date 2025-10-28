# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/27 15:24:27 by rcochran          #+#    #+#              #
#    Updated: 2025/10/28 11:28:26 by rcochran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

CC			= 	c++
CFLAGS		=	-Wall -Werror -Wextra -Wno-unused -std=c++98
NAME		=	ScavTrap
OBJ_DIR		=	obj/
SRC			=	src/
INCLUDES	=	-I ./includes
FILES		= 	$(SRC)ClapTrap.cpp \
				$(SRC)ScavTrap.cpp
				

MAIN		= 	$(SRC)main.cpp
all : $(NAME)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

$(NAME) : $(OBJ_DIR)
	$(CC) $(CFLAGS) $(FILES) $(MAIN) $(INCLUDES) -o $(NAME)

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)