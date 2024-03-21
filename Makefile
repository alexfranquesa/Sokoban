##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## Holaaaaaa
##

SRC 	=	$(wildcard lib/*.c)	\
			$(wildcard src/*.c)\

OBJ	 	= 	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	=	-Werror -Wextra -Wshadow -g -lncurses -I./include

all:	$(NAME)
$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
