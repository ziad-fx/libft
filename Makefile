SRCS = ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlen.c \
			ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c \
			ft_strrchr.c ft_memcmp.c ft_memchr.c ft_isalnum.c ft_itoa.c ft_substr.c ft_striteri.c \
			ft_strdup.c ft_strjoin.c ft_strmapi.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_strnstr.c\

OBJS	=	${SRCS:.c=.o}
NAME  =	libft.a
LIB = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o: %.c libft.h
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS} 
	${LIB} ${NAME} ${OBJS}
all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all