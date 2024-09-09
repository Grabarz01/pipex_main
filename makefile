# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgrabows <fgrabows@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 13:47:11 by fgrabows          #+#    #+#              #
#    Updated: 2024/09/06 14:34:53 by fgrabows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = pipex
LIBFT_DIR = ./libft
GNL_DIR = ./get_next_line


LIBFT = $(LIBFT_DIR)/libft.a
GNL_FILES = $(GNL_DIR)/get_next_line.c $(GNL_DIR)/get_next_line_utils.c
SRC_FILES = main.c utils.c input_checkers.c file_readers.c free_fun.c $(GNL_FILES)
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ_FILES) $(LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	rm -f $(OBJ_FILES)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
