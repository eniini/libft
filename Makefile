# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eniini <eniini@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/11 10:42:46 by eniini            #+#    #+#              #
#    Updated: 2020/11/30 16:11:15 by eniini           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c \
	ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
	ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
	ft_tolower.c \
	ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
	ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
	ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstaddl.c \
	ft_lstiter.c ft_lstmap.c \
	ft_wordcount.c ft_islower.c ft_isupper.c ft_isspace.c \
	ft_strndup.c ft_elemdel.c ft_free_arr.c ft_realloc.c get_next_line.c \
	ft_get_arr_size.c ft_swap.c ft_abs.c ft_getout.c \
	ft_i_lerp.c ft_d_lerp.c ft_inverse_i_lerp.c ft_inverse_d_lerp.c \
	ft_clamp_i.c ft_clamp_d.c

OBJ = $(SRC:.c=.o)

CYAN = $('\033[0;36m')

NOCOL = $('\033[0m')

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "\033[0;36m[libft] libft archive created\033[0m"

$(OBJ) : $(SRCS)
	@$(CC) $(CFLAGS) $(SRC)

clean :
	@rm -f $(OBJ)
	@echo "\033[0;36m[libft] .obj files removed\033[0m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[0;36m[libft] archive removed\033[0m"

re : fclean all

.PHONY : all clean fclean re
