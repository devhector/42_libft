CC			= clang
CFLAGS		= -Wall -Werror -Wextra -std=c99 -g

LIB			= libft.a

FTSRC		= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
				ft_isprint.c ft_memcmp.c ft_memset.c ft_strchr.c ft_strlcat.c\
				ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
				ft_tolower.c ft_toupper.c

OBJ			= $(FTSRC:.c=.o)

all: $(LIB)

$(LIB): $(OBJ) libft.h
	ar -rcs $(LIB) $(OBJ)
	ranlib $(LIB)


c.o: $(FTSRC)
	$(CC) $(CFLAGS) -c $< -o $@
