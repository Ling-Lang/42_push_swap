NAME = push_swap

RM = rm -f
CC = gcc 
CFLAGS = -Wall -Wextra
LIB 		= libft/libft.a

SRC = main.c \

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ) | lft
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)	
lft:
	(cd libft && make all)
clean:
	$(RM) $(OBJ)
	(cd libft && make clean)
flcean: clean
	$(RM) $(NAME)
	(cd libft && make fclean)
make re: fclean all
