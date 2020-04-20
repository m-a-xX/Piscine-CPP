# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/20 10:47:12 by mavileo           #+#    #+#              #
#    Updated: 2020/04/20 19:10:17 by mavileo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS                    =   directory.cpp	\
							Contact.cpp		\

OBJS                    = $(SRCS:.c=.o)

CC                              = clang++
RM                              = rm -f
CFLAGS                  = -Wall -Wextra -Werror

NAME                    = directory

all:                    $(NAME)

$(NAME):                $(OBJS)
						clang++ ${CFLAGS} -o ${NAME} ${OBJS}

clean:
						$(RM) $(OBJS) $(BONUS_OBJS)

fclean:                 clean
						$(RM) $(NAME)

re:                             fclean $(NAME)

.PHONY:                 all clean fclean re