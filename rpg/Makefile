##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## mul
##

SRC 	=	./src/main.c 							\
			./src/free_struct.c						\

SRC		+=	./src/windows/menu/main_window.c		\
			./src/windows/menu/credit/credit_window.c	\
			./src/windows/game/game_window.c		\
			./src/windows/game/setting/setting_window.c		\
			./src/windows/game/inventory_window.c		\
			./src/windows/create_win.c				\

SRC		+=	./src/actions/action_menu_page.c		\
			./src/actions/action_game_page.c		\

SRC 	+=	./src/parsing/get_buffer.c 	\
			./src/parsing/fill_stat_struct.c 	\
			./src/parsing/map_management/set_direction.c 	\
			./src/parsing/map_management/set_map.c 	\
			./src/parsing/map_management/set_move.c 	\

SRC		+=	./src/sprites/sprite_menu_page.c		\
			./src/sprites/sprite_credit_page.c 	\
			./src/sprites/sprite_intro.c	\
			./src/sprites/intro_text.c	\

SRC		+=	./src/buttons/create_button.c			\
			./src/buttons/create_button_2.c			\
			./src/buttons/draw_buttons.c			\

SRC		+=	./src/init_elements/init_button.c		\

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
