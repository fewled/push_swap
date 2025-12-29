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
			  lib/ft_strlen.c

TOOLS		= tools/clean_package.c \
			  tools/clean_stack.c \
			  tools/new_package.c \
			  tools/new_stack.c \
			  tools/find_median.c

OPERATIONS	= operations/push.c \
			  operations/swap.c \
			  operations/rotate.c \
			  operations/rev_rotate.c

SRCS		= main.c $(LIB) $(TOOLS) $(OPERATIONS)
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
