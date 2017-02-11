# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahunt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/30 15:41:53 by ahunt             #+#    #+#              #
#    Updated: 2016/11/30 15:41:58 by ahunt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

CC = gcc 

INC += include libft/include

LIBFT = ./libft/libft.a

LIBFT_LINK = -L libft -lft

CFLAGS += $(foreach d, $(INC), -I$d)

AR = ar

RLIB = ranlib

RM = rm -rf

SRC_BASE = 	main.c \

STRLEN_BASE =	00_launcher.c \
			01_null_test.c \
			02_basic_test.c \
			03_long_test.c \
			04_uninitialized_test.c \
			05_special_characters_test.c \

SRC = $(addprefix framework/strlen/, $(STRLEN_BASE))
SRC += $(addprefix framework/, $(SRC_BASE))

OBJ = $(addprefix obj/, $(STRLEN_BASE:.c=.o))
OBJ += $(addprefix obj/, $(SRC_BASE:.c=.o))

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(OBJ): | obj

obj:
	mkdir -p $@

obj/%.o: framework/strlen/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

obj/%.o: framework/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) -o $@ $^  $(CFLAGS) -L libft -lft 

debug: $(OBJ)
	$(CC) -fsanitize=address  -o $@ $^  $(CFLAGS) -L libft -lft 

clean:
	$(RM) $(OBJ)
	make -C ./libft clean

fdf_clean:
	$(RM) $(OBJ)

fclean: fdf_clean
	$(RM) $(NAME)
	$(RM) obj
	make -C ./libft fclean

fdf_fclean: fdf_clean
	$(RM) $(NAME)
	$(RM) obj

re: fdf_fclean all
	make -C ./libft re

.PHONY: all clean fclean re
