
CFLAGS		= -Wall -Wextra -Werror -std=c99 -g
CC			= gcc
NAME		= libft.a
FLAGLIB		= -rcs
RM			= /bin/rm -f

FUNC		= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
				ft_isprint.c ft_memcmp.c ft_memset.c ft_strchr.c ft_strlcat.c\
				ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
				ft_tolower.c ft_toupper.c ft_bzero.c ft_calloc.c ft_memchr.c\
				ft_memcpy.c ft_memmove.c ft_strdup.c

OBJ			= $(FUNC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ) libft.h
			ar $(FLAGLIB) $(NAME) $(OBJ)
			ranlib $(NAME)
.c.o:
			$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all re clean fclean
