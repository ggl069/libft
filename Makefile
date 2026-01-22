# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggaetani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/20 16:06:18 by ggaetani          #+#    #+#              #
#    Updated: 2026/01/20 16:06:20 by ggaetani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memcmp.c \
ft_putchar_fd.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putstr_fd.c \
ft_lstdelone.c \
ft_strchr.c \
ft_itoa.c \
ft_memchr.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strrchr.c \
ft_putendl_fd.c \
ft_tolower.c \
ft_toupper.c \
ft_atoi.c \
ft_putnbr_fd.c \
ft_strtrim.c \
ft_lstadd_back.c \
ft_strnstr.c \
ft_lstclear.c \
ft_strncmp.c \
ft_lstsize.c \
ft_strmapi.c \
ft_strjoin.c \
ft_striteri.c \
ft_lstlast.c \
ft_lstiter.c \
ft_strdup.c \
ft_lstmap.c \
ft_calloc.c \
ft_substr.c \
ft_split.c \
ft_lstnew.c \
ft_lstadd_front.c \

OBJ = $(SRC:.c=.o)

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
