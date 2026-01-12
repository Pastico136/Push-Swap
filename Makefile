NAME = push_swap
LIBFT = libft_custom/libft.a
#LDFLAGS = $(LIBFT)

CC = cc

SRC = src/parser.c \
	src/make_stack_a.c \
	src/lib_dlist/stack_print.c \
	src/lib_dlist/stack_init.c \
	src/lib_dlist/stack_clear.c \
	src/lib_dlist/stack_add_back.c \
	src/lib_dlist/new_node.c \
	src/main.c

HEADER = -I includes/ \
		-I libft_custom/

ifndef DEBUG
    CFLAGS = -Wall -Wextra -Werror -g $(HEADER)
else
    CFLAGS = -g $(HEADER)
endif

OBJ = $(SRC:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ) $(LIBFT)
	$(CC) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(dir $(LIBFT))

clean :
	rm -f $(OBJ)
	$(MAKE) -C $(dir $(LIBFT)) clean

fclean : clean
	rm -f $(NAME)
	$(MAKE) -C $(dir $(LIBFT)) fclean

re : fclean all

.PHONY : all clean fclean re
