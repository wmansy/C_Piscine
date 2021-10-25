NAME = ft_cat

SRCS = ft_cat.c

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

.PHONY: all clean re fclean
