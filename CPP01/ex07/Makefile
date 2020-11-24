# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/20 10:47:12 by mavileo           #+#    #+#              #
#    Updated: 2020/04/28 19:26:35 by mavileo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS                    =   main.cpp

OBJS                    = $(SRCS:.c=.o)

CC                              = clang++
RM                              = rm -f
CFLAGS                  = -Wall -Wextra -Werror

NAME                    = replace

all:                    $(NAME)

$(NAME):                $(OBJS)
						clang++ ${CFLAGS} -o ${NAME} ${OBJS}

clean:
						$(RM) $(NAME)

fclean:                 clean

re:                             fclean $(NAME)

.PHONY:                 all clean fclean re