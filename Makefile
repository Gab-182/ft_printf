NAME = libftprintf.a

FILES =  ft_printf.c\
		ft_printf_utils.c\
		main.c

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