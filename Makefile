SRC	=	type_generic.c

OBJ	=	$(SRC:.c=.o)

NAME	=	type_generic

CFLAGS	+=	-W -Wall -Werror -Wextra -Iinclude/

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f $(NAME)

re: clean all

.PHONY: all clean re