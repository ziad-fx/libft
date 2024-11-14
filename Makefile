# NAME  =	libft.a
# CC = cc
# RM = rm -f
# AR  = ar -rcs
# CFLAGS = -Wall -Wextra -Werror

# SRCS = ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
# 			ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlen.c \
# 			ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c \
# 			ft_strrchr.c ft_memcmp.c ft_memchr.c ft_isalnum.c ft_itoa.c ft_substr.c ft_striteri.c \
# 			ft_strdup.c ft_strjoin.c ft_strmapi.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_strnstr.c\
# 			ft_atoi.c ft_calloc.c ft_strtrim.c ft_putendl_fd.c ft_putnbr_fd.c

# OBJS	=	${SRCS:.c=.o}

# ${NAME}: ${OBJS} 
# 	${AR} ${NAME} ${OBJS}  

# %.o: %.c libft.h
# 	${CC} ${CFLAGS} -c $< -o $@ 


# all: ${NAME}
# clean:
# 	${RM} ${OBJS}
# fclean: clean
# 	${RM} ${NAME}

# re: fclean all

SRCS    = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
            ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlen.c \
            ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
            ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
            ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS    = ft_lstnew.c ft_lstadd_front.c 
OBJS    = ${SRCS:.c=.o}
BONUS_OBJS    = ${BONUS:.c=.o}
NAME    = libft.a
LIB        = ar rc
CC        = cc
RM        = rm -f
CFLAGS    = -Wall -Wextra -Werror

%.o: %.c libft.h
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS} 
	${LIB} ${NAME} ${OBJS}
 
fclean: clean
	${RM} ${NAME}   
	
clean:
	${RM} ${OBJS} ${BONUS_OBJS}

re: fclean all

bonus: ${BONUS_OBJS}
	${LIB} ${NAME} ${BONUS_OBJS}