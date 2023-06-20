NAME = push_swap
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra
LIB		= libft/libft.a

SRC = main.c \
	list_utils.c \
	init.c \
	instructions/instructions_s.c \
	instructions/instructions_p.c \
	instructions/instructions_r.c \
	instructions/instructions_r2.c \
	push_swap.c 	\
	three_sort.c	\
	two_sort.c		\
	five_sort.c		\
	four_sort.c		\
	sort_array.c	\
	big_sort.c

OBJ = $(SRC:.c=.o)
$(NAME): $(OBJ) | lft
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIB)	

lft:
	(cd libft && make all)
clean:
	$(RM) $(OBJ)
	(cd libft && make clean)
fclean: clean
	$(RM) $(NAME)
	(cd libft && make fclean)
make re: fclean $(NAME)
