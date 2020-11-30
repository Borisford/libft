# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gerenfor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 20:05:42 by gerenfor          #+#    #+#              #
#    Updated: 2019/09/20 17:55:29 by gerenfor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c \
ft_bzero.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isprint.c \
ft_memccpy.c \
ft_memchr.c \
ft_memalloc.c \
ft_memcpy.c \
ft_memdel.c \
ft_memcmp.c \
ft_putchar.c \
ft_putchar_fd.c \
ft_putendl.c \
ft_memmove.c \
ft_putendl_fd.c \
ft_itoa.c \
ft_memset.c \
ft_putnbr.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_putstr.c \
ft_strclr.c \
ft_strcat.c \
ft_strcmp.c \
ft_strchr.c \
ft_strdel.c \
ft_strcpy.c \
ft_striter.c \
ft_strdup.c \
ft_striteri.c \
ft_strlen.c \
ft_strequ.c \
ft_strlcat.c \
ft_strmap.c \
ft_strmapi.c \
ft_strjoin.c \
ft_strncat.c \
ft_strncmp.c \
ft_strncpy.c \
ft_strnew.c \
ft_strnequ.c \
ft_strrchr.c \
ft_strnstr.c \
ft_strstr.c \
ft_tolower.c \
ft_strsub.c \
ft_toupper.c \
ft_strtrim.c \
ft_strsplit.c \
ft_lstnew.c \
ft_lstdelone.c \
ft_lstdel.c \
ft_lstadd.c \
ft_lstiter.c \
ft_lstmap.c \
ft_is_prime.c \
ft_pow.c \
ft_range.c \
ft_sqrt.c \
ft_swap.c \
ft_isupper.c \
ft_islower.c

OBJS = $(SRCS:.c=.o)

INCL = libft.h

CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRCS) $(INCL)
	gcc $(CFLAGS) $(SRCS) -c
	ar rc  $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
