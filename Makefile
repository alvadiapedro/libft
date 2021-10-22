NAME=libft.a

SRCS=

OBJECTS=

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Werror -Wextra -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME $(OBJECTS))
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
