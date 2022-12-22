# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elenz <elenz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 10:04:01 by elenz             #+#    #+#              #
#    Updated: 2021/07/25 15:09:48 by elenz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

SOURCE = ft_dectohex.c\
ft_evaluate.c\
ft_hexnbr.c\
ft_pointer.c\
ft_pputchar.c\
ft_pputnbr.c\
ft_pputstr.c\
ft_unpputnbr.c\
ft_printf.c\

LIBPATH = libft/

MAKE = make

all: $(NAME) 

$(NAME): libftmake
	$(CC) $(CFLAGS) -c $(SOURCE)
	ar -rcs $(NAME) $(SOURCE:.c=.o) $(LIBPATH)*.o

libftmake:
	${MAKE} libft.a -C ${LIBPATH}

clean:
	rm -f *.o
	rm -f ${LIBPATH}*.o

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBPATH)libft.a

re: fclean all
