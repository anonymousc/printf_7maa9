NAME = libftprintf.a

CC = cc 

CFLAGS = -Wextra -Wall -Werror

src = ft_printf.c ft_puthex.c ft_putaddr.c ft_putchar.c ft_putnbr.c ft_putHEX.c ft_putnbr.c ft_putstr.c

obj = $(src:.c=.o)

all : $(NAME)

$(NAME) : $(obj)
	ar -rc $(NAME) $(obj)

clean :
	@rm -rf $(obj)

fclean : clean
	@rm -rf $(NAME)
re : fclean all 
	@rm -rf $(obj)