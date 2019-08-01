NAME = get_next_line
SRCS = *.c ./main.c
OBJS = *.o ./main.o
HEADER = get_next_line.h
FLAGS = -Wall -Wextra -Werror

LIBFT = /libft

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	gcc $(FLAGS) -o $(NAME) $(SRCS) -I $(HEADER) -L. $(LIBFT)libft.a

clean:
	/bin/rm -f $(OBJS)
	make -C $(LIBFT) clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C $(LIBFT) fclean

re: fclean all
	