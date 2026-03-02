NAME		=	push_swap
CC			=	cc
CFLAGS		= 	-Wall -Wextra -Werror -g
INCLUDES	= 	-I.

LIB			=	src/lib/ft_atoi.c \
				src/lib/ft_atoll.c \
				src/lib/ft_isdigit.c \
				src/lib/ft_isint.c \
				src/lib/ft_isnum.c \
				src/lib/ft_puterr.c \
				src/lib/ft_putstr.c \
				src/lib/ft_strlen.c \
				src/lib/ft_putnbr.c \
				src/lib/ft_abs.c \
				src/lib/ft_biggest.c \
				src/lib/ft_count_words.c \
				src/lib/ft_split.c

TYPES		=	src/types/package/new_package.c \
				src/types/package/delete_package.c \
				src/types/stack/new_stack.c \
				src/types/stack/delete_stack.c \
				src/types/move/new_move.c \
				src/types/move/compare_moves.c \
				src/types/move/clean_move.c \
				src/types/move/delete_move.c \

TOOLS		= 	src/tools/suggest_hints.c \
				src/tools/status.c

OPERATIONS	= 	src/operations/push.c \
				src/operations/swap.c \
				src/operations/rotate.c \
				src/operations/rev_rotate.c

ALGO		= 	src/algo/sort.c \
				src/algo/inject.c \
				src/algo/transfer.c \
				src/algo/transfer_helper.c \
				src/algo/arrange.c \
				src/algo/refill.c

SRCS		=	src/main.c $(LIB) $(TYPES) $(TOOLS) $(OPERATIONS) $(ALGO)
OBJS		= 	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
