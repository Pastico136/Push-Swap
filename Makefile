NAME = push_swap
LIBFT = libft_custom/libft.a
#LDFLAGS = $(LIBFT)

CC = cc

SRC = src/parser.c 

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
