# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahunt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/12 00:20:24 by ahunt             #+#    #+#              #
#    Updated: 2017/02/12 00:20:26 by ahunt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = test

ARCH = libunit.a

CC = gcc 

INC += include libft/include libunit/include

LIBFT = ./libft/libft.a

LIBUNIT = ./libunit/libunit.a

LIBFT_LINK = -L libft -lft

LIBUNIT_LINK = -L libunit -lunit

CFLAGS += $(foreach d, $(INC), -I$d)

AR = ar rcs

RLIB = ranlib

RM = rm -rf

SRC_BASE = 	main.c \

FRMWRK_BASE =	add_test.c \
				assert_str_eq.c \
				assert_digit.c \
				assert_int_eq.c \
				create_test.c \
				get_exit_status.c \
				display_suite_results.c \
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


SRC = $(addprefix real-tests/strlen/, $(STRLEN_BASE))
SRC += $(addprefix real-tests/isnumber/, $(ISNUM_BASE))
SRC += $(addprefix real-tests/strcat/, $(STRCAT_BASE))
SRC += $(addprefix real-tests/, $(SRC_BASE))

OBJ = $(addprefix obj/strlen/, $(STRLEN_BASE:.c=.o))
OBJ += $(addprefix obj/strcat/, $(STRCAT_BASE:.c=.o))
OBJ += $(addprefix obj/isnumber/, $(ISNUM_BASE:.c=.o))
OBJ += $(addprefix obj/, $(SRC_BASE:.c=.o))

all: $(NAME)

$(OBJ): | obj

obj:
	mkdir -p $@
	mkdir -p $@/strlen
	mkdir -p $@/isnumber
	mkdir -p $@/strcat
	mkdir -p $@/fstrcat


obj/isnumber/%.o: real-tests/isnumber/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

obj/strlen/%.o: real-tests/strlen/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

obj/strcat/%.o: real-tests/strcat/%.c
	$(CC) $(CFLAGS) -o $@ -c $<


obj/%.o: real-tests/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) -o $@ $^  $(CFLAGS) $(LIBFT_LINK) $(LIBUNIT_LINK)

debug: $(OBJ)
	$(CC) -fsanitize=address  -o $@ $^  $(CFLAGS) LIBFT_LINK LIBUNIT_LINK

clean:
	$(RM) $(OBJ)

fdf_clean:
	$(RM) $(OBJ)

fclean: fdf_clean
	$(RM) $(NAME)
	$(RM) objn

fdf_fclean: fdf_clean
	$(RM) $(NAME)
	$(RM) obj

re: fdf_fclean all

.PHONY: all clean fclean re