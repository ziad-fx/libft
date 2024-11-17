SRCS    = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
            ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlen.c \
            ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
            ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
            ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS    = ft_lstnew_bonus.c ft_lstadd_front_bonus.c  ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c ft_lstclear_bonus.c 
OBJS    = ${SRCS:.c=.o}
BONUS_OBJS    = ${BONUS:.c=.o}
NAME    = libft.a
LIB        = ar rcs
CC      = cc
RM        = rm -f
CFLAGS    = -Wall -Wextra -Werror

%.o: %.c libft.h
	${CC} ${CFLAGS} -c $< -o $@
	$(LIB) $(NAME) $@ 

all: ${NAME}

${NAME}: ${OBJS}

bonus: ${BONUS_OBJS}
 
fclean: clean
	${RM} ${NAME}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

re: fclean all