NAME = libftprintf.a
CC = cc -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

SRCS = printf_functions2.c printf_functions.c

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all