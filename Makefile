NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g
INCLUDES	= -I.

LIB			= lib/ft_atoi.c \
			  lib/ft_atoll.c \
			  lib/ft_isdigit.c \
			  lib/ft_isint.c \
			  lib/ft_isnum.c \
			  lib/ft_puterr.c \
			  lib/ft_putstr.c \
			  lib/ft_strlen.c \
			  lib/ft_putnbr.c \
			  lib/ft_abs.c \
			  lib/ft_biggest.c \
			  lib/ft_count_words.c \
			  lib/ft_split.c

TYPES		= types/package/new_package.c \
			  types/package/delete_package.c \
			  types/stack/new_stack.c \
			  types/stack/delete_stack.c \
			  types/move/new_move.c \
			  types/move/clean_move.c \
			  types/move/delete_move.c \

TOOLS		= tools/suggest_hints.c \

OPERATIONS	= operations/push.c \
			  operations/swap.c \
			  operations/rotate.c \
			  operations/rev_rotate.c

ALGO		= algo/sort.c \
			  # algo/unload.c \
			  # algo/find_cost.c \
			  # algo/arrange.c \
			  # algo/refill.c \
			  # algo/adjust.c \

SRCS		= main.c $(LIB) $(TYPES) $(TOOLS) $(OPERATIONS) $(ALGO)
OBJS		= $(SRCS:.c=.o)

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
