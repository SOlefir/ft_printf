# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: solefir <solefir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 14:37:43 by solefir           #+#    #+#              #
#    Updated: 2019/04/25 17:10:49 by solefir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc -Wall -Wextra -Werror -I includes

SRC = libft/ft_bzero.c libft/ft_memdel.c libft/ft_strclr.c\
    libft/ft_strdel.c libft/ft_striter.c libft/ft_striteri.c\
    libft/ft_putchar.c libft/ft_putchar_fd.c libft/ft_putendl.c\
    libft/ft_putendl_fd.c libft/ft_putnbr.c libft/ft_putnbr_fd.c\
    libft/ft_putstr.c libft/ft_putstr_fd.c libft/ft_memalloc.c\
    libft/ft_memcpy.c libft/ft_memccpy.c libft/ft_memchr.c\
    libft/ft_memmove.c libft/ft_memset.c libft/ft_atoi.c\
    libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c\
    libft/ft_isdigit.c libft/ft_isprint.c libft/ft_memcmp.c\
    libft/ft_strcmp.c libft/ft_strequ.c libft/ft_strnequ.c\
    libft/ft_strncmp.c libft/ft_tolower.c libft/ft_toupper.c\
    libft/ft_itoa.c libft/ft_strcat.c libft/ft_strncat.c\
    libft/ft_strnew.c libft/ft_strchr.c libft/ft_strrchr.c\
    libft/ft_strcpy.c libft/ft_strmap.c libft/ft_strmapi.c\
    libft/ft_strncpy.c libft/ft_strdup.c libft/ft_strjoin.c\
    libft/ft_strstr.c libft/ft_strnstr.c libft/ft_strsub.c\
    libft/ft_strtrim.c libft/ft_strsplit.c libft/ft_strlcat.c\
    libft/ft_strlen.c libft/ft_lstnew.c libft/ft_lstmap.c\
    libft/ft_lstdelone.c libft/ft_lstdel.c libft/ft_lstadd.c\
    libft/ft_lstiter.c libft/ft_masmemdel.c libft/ft_lstdelcontent.c\
	libft/ft_iswhitespace.c\
    src/ft_printf.c src/parse_arg.c src/print_buf.c src/flags.c\
	src/specifier.c src/type_c.c src/type_s.c src/type_f.c src/type_di.c\
	src/type_u.c src/type_x.c src/type_p.c src/type_o.c src/add_in_buf.c\
	src/width__precision.c src/len_nbr.c src/nbr.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all