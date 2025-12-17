NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -I.

LIB			= $(wildcard lib/*.c)
TOOLS		= $(wildcard tools/*.c)
OPERATIONS	= $(wildcard operations/*.c)
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
