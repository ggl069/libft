You must submit a Makefile which will compile your source files to a static library
libft.a.

• Your Makefile must at least contain the rules $(NAME), all, clean, fclean et re
in the order that you will see fit.

• Your Makefile must compile your work with the flags -Wall, -Wextra and -Werror.

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =
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
	ft_putendl.c \
	ft_putnbr.c \
	ft_putstr_fd.c \
	ft_putstr.c \
	ft_strchr.c \
	ft_strclr.c \
	ft_strcat.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_memalloc.c \
	ft_putchar.c \
	ft_strrchr.c \
	ft_putendl_fd.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_atoi.c \
	ft_strmap.c \
	ft_putnbr_fd.c \
	ft_strtrim.c \
	ft_strsub.c \
	ft_strstr.c \
	ft_strsplit.c \
	ft_strnstr.c \
	ft_strnew.c \
	ft_strnequ.c \
	ft_strncpy.c \
	ft_strncmp.c \
	ft_strncat.c \
	ft_strmapi.c \
	ft_strjoin.c \
	ft_striteri.c \
	ft_striter.c \
	ft_strequ.c \
	ft_strdup.c \
	ft_memccpy.c \
	ft_memdel.c \
	ft_strcpy.c \
	ft_strcmp.c \
	ft_strdel.c \
	ft_calloc.c \

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
