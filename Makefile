

NAME = chaos

SRCS = src/main.c

INCDIR = inc/

INC = -I$(INCDIR)

FLAGS = -Wall -Wextra -Werror -lmlx -framework OpenGL -framework AppKit

$(NAME):
	$(CC) $(FLAGS) $(SRCS) $(INC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
