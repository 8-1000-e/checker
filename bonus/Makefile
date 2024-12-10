# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edubois- <edubois-@student.42angouleme>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 13:57:30 by edubois-          #+#    #+#              #
#    Updated: 2024/12/09 15:11:47 by edubois-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		:= checker

DIR_LIB 	=  ../lib

PRINTF_DIR 	=  $(DIR_LIB)/printf
PRINTF_LIB 	:= $(PRINTF_DIR)/libftprintf.a

LIBFT_DIR 	=  $(DIR_LIB)/libft
LIBFT_LIB 	:= $(LIBFT_DIR)/libft.a

GNL_DIR		= $(DIR_LIB)/gnl
GNL_LIB		= $(GNL_DIR)/gnl.a

SRCS =  main.c\
		get_stack.c \
		clean_exit.c\
		parse_arg.c\
		function_a/ft_function_a.c\
		function_a/ft_function_b.c\
		function_a/ft_function_ba.c\
		function_a/ft_function_shared.c\

OBJS = $(SRCS:.c=.o)

CC := cc
FLAGS := -Wall -Wextra -Werror -g

.SILENT:

all: $(NAME)

$(NAME): animate $(PRINTF_LIB) $(OBJS) $(LIBFT_LIB) $(GNL_LIB)
	echo "Compilation de $(NAME)..."
	$(CC) $(FLAGS) -o $@ $(OBJS) $(PRINTF_LIB) $(LIBFT_LIB) $(GNL_LIB)

animate:
	echo -n "Compilation en cours "
	for i in 1 2 3 4 5; do \
		sleep 0.1; echo -n "."; \
	done
	echo ""

$(PRINTF_LIB):
	echo "Compilation de la bibliothèque printf..."
	make -s -C $(PRINTF_DIR)

$(LIBFT_LIB):
	echo "Compilation de la bibliothèque libft..."
	make -s -C $(LIBFT_DIR)

$(GNL_LIB):
	echo "Compilation de la bibliothèque get_next_line..."
	make -s -C $(GNL_DIR)
	

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	echo "Nettoyage des fichiers objets..."
	make clean -s -C $(PRINTF_DIR)
	make clean -s -C $(LIBFT_DIR)
	make clean -s -C $(GNL_DIR)
	rm -f $(OBJS)

fclean: clean
	echo "Suppression des exécutables..."
	make fclean -s -C $(PRINTF_DIR)
	make fclean -s -C $(GNL_DIR)
	make fclean -s -C $(LIBFT_DIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re animate
