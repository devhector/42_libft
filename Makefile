CC			= clang
CFLAGS		= -Wall -Werror -Wextra -std=c99 -g

NAME			= libft.a

FTSRC		= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
				ft_isprint.c ft_memcmp.c ft_memset.c ft_strchr.c ft_strlcat.c\
				ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
				ft_tolower.c ft_toupper.c ft_bzero.c ft_calloc.c ft_memchr.c\
				ft_memcpy.c ft_memmove.c ft_strdup.c  

OBJ			= $(FTSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) libft.h
	ar -rcs $(NAME) $(OBJ)
	ranlib $(NAME)


c.o: $(FTSRC)
	$(CC) -I $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
