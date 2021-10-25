NAME = bsq

SRCS = main.c ft_readd.c ft_check.c square.c ft_stdin.c ft_square2.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME} : ${OBJS}
		${CC} ${OBJS} -o ${NAME}
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean: 
		rm -f ${OBJS}
	
fclean: clean
		rm -f ${NAME}

-re:	fclean all

.PHONY: all clean re fclean
