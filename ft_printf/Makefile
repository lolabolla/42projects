SRCS = ft_printf.c ft_percent.c ft_char.c ft_string.c ft_pointer.c ft_integer.c ft_unsigned_integer.c ft_hex.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Werror -Wextra -Wall

NAME = libftprintf.a

all: $(NAME)

CC = cc

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	make -C ./libft
	cp ./libft/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	make clean -C libft 
	rm -rf $(OBJS)

fclean:
	make fclean -C ./libft
	rm -rf libft.a
	rm -rf $(OBJS) $(NAME)

re: fclean all
