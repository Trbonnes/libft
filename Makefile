CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

SRCS = *.c
OBJS = ${SRCS:.c=.o}

NAME = libft.a

LINK = ar rcs

${NAME}:	${OBJS}
			${LINK} ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -f ${OBJS}
	
fclean:		clean
			rm -f ${NAME}

re: 		fclean all

.PHONY: all clean fclean re