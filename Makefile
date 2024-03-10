NAME = ft_printf.a

CC = cc 

CFLAGS = -Wextra -Wall -Werror

src = ft_printf.c

obj = $(src:.c=.o)

all : $(NAME)

$(NAME) : $(obj)
	ar -rc $(NAME) $(obj)

clean : $(obj)
	rm -rf $(obj)

fclean : clean
	rm -rf $(NAME)
re : clean fclean all