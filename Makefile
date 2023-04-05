##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## mul
##

SRC 	=	./src/main.c \
			./src/windows/menu/main_window.c	\
			./src/windows/menu/create_menu_win.c	\
			./src/actions/action_menu_page.c	\
			./src/sprites/sprite_menu_page.c	\
			./src/buttons/create_button.c	\
			./src/buttons/draw_buttons.c	\
			./src/init_elements/init_button.c	\
			./src/free_struct.c	\

CC 		=	gcc

RM 		=	rm -f

OBJ 	=	$(SRC:.c=.o)

NAME	=	my_rpg

LIBFLAGS 	=	-Llib/my/ -lmy

FLAGCSFML 	= 	-lcsfml-system -lcsfml-graphics -lcsfml-audio -lcsfml-window

CFLAGS 		= 	-Wall -Wextra -g3

CPPFLAGS	= 	-iquote ./include/

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	$(CC) $(SRC) -o $(NAME) $(LIBFLAGS) $(CFLAGS) $(CPPFLAGS) $(FLAGCSFML)
	make clean
	make fclean -C ./lib/my

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	make fclean -C ./lib/my

re:	fclean all

.PHONY:	re fclean clean all
