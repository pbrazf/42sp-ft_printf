NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c print/print_char.c print/print_str.c print/print_pct.c \
print/print_nbr.c print/print_hex.c print/print_ptr.c utils/hexadecimal.c \
utils/management.c

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

TEST_SRCS = tests/main.c
TEST_BIN = test.out

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)
	
%.o: %.c
	$(CC) $(CFLAGS) -I . -I $(LIBFT_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean 
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

test: $(NAME)
	$(CC) $(CFLAGS) $(TEST_SRCS) -I . \
		-L . -lftprintf -L $(LIBFT_DIR) -lft -o $(TEST_BIN)
	./$(TEST_BIN)
	rm $(TEST_BIN)

.PHONY: all clean fclean re test
