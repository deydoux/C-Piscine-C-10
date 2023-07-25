NAME=ft_cat
SOURCES=srcs/ft_cat.c \
		srcs/ft_putstr.c \
		srcs/put_error.c \
		srcs/read_fd.c
CC=gcc
CFLAGS=-Wall -Wextra -Werror
OBJECTS=$(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
