# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahunt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/22 17:09:23 by ahunt             #+#    #+#              #
#    Updated: 2016/10/04 19:41:51 by ahunt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C = gcc

CFLAGS = -Wall -Wextra -Werror

INC = include/
CFLAGS += -I$(INC)

SRC_BASE = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_strcpy.c \
	ft_strncpy.c ft_strdup.c ft_strcat.c ft_strncat.c ft_strlcat.c \
	ft_strchr.c ft_strrchr.c ft_bzero.c ft_memset.c ft_memcpy.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_memccpy.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
	ft_strclr.c	ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
	ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
	ft_strsplit.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_itoa.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strstr.c ft_strnstr.c \
	ft_strncmp.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
	ft_lstiter.c ft_lstmap.c ft_strapp.c ft_strpre.c ft_str_index.c \
	get_next_line.c ft_printf.c ft_get_length.c ft_parse_args.c \
	ft_printf_char.c ft_printf_wchar.c ft_printf_hex.c ft_printf_int.c \
	ft_printf_oct.c ft_printf_ptr.c ft_printf_string.c ft_printf_wstring.c \
	ft_printf_mod.c ft_printf_uint.c ft_printf_binary.c ft_get_wide_char.c \
	ft_get_conv_spec.c ft_printf_mod.c ft_padding.c ft_putuint.c \
	ft_itoa_base.c ft_count_tokens.c\

AR = ar rcs

RLIB = ranlib

RM = rm -rf

SRC = $(addprefix src/, $(SRC_BASE))

OBJS = $(addprefix obj/, $(SRC_BASE:.c=.o))

.PHONY: all clean fclean re

all: $(NAME)

$(OBJS): | obj

obj:
	mkdir -p $@

obj/%.o: src/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(AR) $@ $^
	$(RLIB) $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) obj

re: fclean all
