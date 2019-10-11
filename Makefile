CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS =	./ft_atoi.c ./ft_itoa.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_memccpy.c ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_putchar_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_putstr_fd.c ./ft_split.c ./ft_strchr.c ./ft_strdup.c ./ft_strjoin.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strmapi.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c ./ft_strtrim.c ./ft_substr.c ./ft_tolower.c ./ft_toupper.c

OBJS =	${SRCS:.c=.o}

INCLUDES =	./libft.h

SRCS_B = ./ft_lstadd_back_bonus.c ./ft_lstdelone_bonus.c ./ft_lstmap_bonus.c ./ft_lstadd_front_bonus.c ./ft_lstiter_bonus.c ./ft_lstnew_bonus.c ./ft_lstclear_bonus.c     ./ft_lstlast_bonus.c      ./ft_lstsize_bonus.c

OBJ_B =	${SRCS_B:.c=.o}

INCLUDES_B =	./libft_bonus.h

NAME =		libft.a

NAME_B =	libft_bonus.a

LINK = ar rcs

${NAME}:	${SRCS} libft.h
			${CC} ${CFLAGS} -I${INCLUDES} -c ${SRCS}
			${LINK} ${NAME} ${OBJS}

${NAME_B}:	${SRCS_B} libft_bonus.h
			${CC} ${CFLAGS} -I${INCLUDES_B} -c ${SRCS_B}
			${LINK} ${NAME_B} ${OBJ_B}

all:	${NAME}

bonus:	${NAME_B}
		
clean:
		rm -f ${OBJS} ${OBJ_B}
	
fclean:	clean
		rm -f ${NAME} ${NAME_B}

re: 	fclean all

bonus_re : fclean bonus

.PHONY:	all clean fclean re