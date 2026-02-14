NAME= libftprintf.a
CC= cc
CCFLAGS = -Wextra -Wall -Werror

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

all:$(NAME)

$(NAME):$(OBJ)
	@ar crs $(NAME) $(OBJ)

%o : %c
	@$(CC) $(CCFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
