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

FRMWRK_BASE =	add_test.c \
				assert_str_eq.c \
				assert_digit.c \
				assert_int_eq.c \
				create_test.c \
				get_exit_status.c \
				print_results.c \
				run_test.c \
				wait_for_process.c \
				launch_suite.c \
				free_tests.c \
				display_results.c \
				init_results.c \

STRLEN_BASE =	00_launcher.c \
				01_empty_test.c \
				02_basic_test.c \
				03_long_test.c \
				04_nullterm_test.c \
				05_special_characters_test.c \
				06_null_test.c \
				07_non_terminated_test.c \

ISNUM_BASE = 	00_launcher.c \
				01_zero_test.c \
				02_dec_char_test.c \
				03_basic_test.c \
				04_escape_char_test.c \
				05_dec_num_test.c \

STRCAT_BASE =	00_launcher.c \
				01_basic_test.c \
				02_return_test.c \
				03_overflow_test.c \
				04_empty_1_test.c \
				05_empty_2_test.c \
				06_null_1_test.c \
				07_null_2_test.c \

FSTRCAT_BASE =	00_launcher.c \
				01_fstrcat_basic_test.c \
				02_fstrcat_empty_test.c \
				03_fstrcat_null_test.c \
				04_fstrcat_empty_2_test.c \
				05_fstrcat_return_test.c \
				06_fstrcat_overflow_test.c \
				07_fstrcat_null_2_test.c \


SRC = $(addprefix tests/strlen/, $(STRLEN_BASE))
SRC += $(addprefix framework/, $(FRMWRK_BASE))
SRC += $(addprefix tests/fstrcat/, $(FSTRCAT_BASE))
SRC += $(addprefix tests/isnumber/, $(ISNUM_BASE))
SRC += $(addprefix tests/strcat/, $(STRCAT_BASE))
SRC += $(addprefix tests/, $(SRC_BASE))

OBJ = $(addprefix obj/strlen/, $(STRLEN_BASE:.c=.o))
OBJ += $(addprefix framework/, $(FRMWRK_BASE:.c=.o))
OBJ += $(addprefix obj/fstrcat/, $(FSTRCAT_BASE:.c=.o))
OBJ += $(addprefix obj/strcat/, $(STRCAT_BASE:.c=.o))
OBJ += $(addprefix obj/isnumber/, $(ISNUM_BASE:.c=.o))
OBJ += $(addprefix obj/, $(SRC_BASE:.c=.o))

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(OBJ): | obj

obj:
	mkdir -p $@
	mkdir -p $@/strlen
	mkdir -p $@/isnumber
	mkdir -p $@/strcat
	mkdir -p $@/fstrcat
	mkdir -p $@/framework

obj/isnumber/%.o: tests/isnumber/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

obj/strlen/%.o: tests/strlen/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

obj/strcat/%.o: tests/strcat/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

obj/fstrcat/%.o: tests/fstrcat/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

obj/framework/%.o: framework/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

obj/%.o: tests/%.c
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
