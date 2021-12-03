# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabdoush <gabdoush@42ABUDHABI.AE>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 01:38:46 by gabdoush          #+#    #+#              #
#    Updated: 2021/12/03 19:08:13 by gabdoush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES =  ft_printf.c\
		ft_printf_utils_1.c\
		ft_printf_utils_2.c\
		arguments_1.c\
		arguments_2.c

OBJECTS =	$(FILES:.c=.o)

HEADERS = ft_printf.h 

FLAGS = -Wall -Werror -Wextra

CC = gcc -c $(FLAGS)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc libftprintf.a $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f  $(NAME)

re: fclean all

%.o: %.c
	$(CC) $< -I $(HEADERS) -o $@ 

.PHONY:	all clean fclean re
