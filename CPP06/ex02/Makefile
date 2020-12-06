SRCS                    =   main.cpp

OBJS                    = $(SRCS:.c=.o)

CC                              = clang++
RM                              = rm -f
CFLAGS                  = -Wall -Wextra -Werror

NAME                    = identify

all:                    $(NAME)

$(NAME):                $(OBJS)
						clang++ ${CFLAGS} -o ${NAME} ${OBJS}

clean:
						$(RM) $(NAME)

fclean:                 clean

re:                             fclean $(NAME)

.PHONY:                 all clean fclean re