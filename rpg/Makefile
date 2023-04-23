##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## mul
##

SRC 	=	./src/main.c 							\
			./src/free_struct.c						\
\
			./src/windows/menu/main_window.c		\
			./src/windows/menu/credit/credit_window.c	\
			./src/windows/game/game_window.c		\
			./src/windows/game/move_rick.c 	\
			./src/windows/game/setting/setting_window.c		\
			./src/windows/game/inventory_window.c		\
			./src/windows/introduction/intro_window.c		\
			./src/windows/create_win.c				\
			./src/windows/create_win2.c	\
			./src/windows/menu/help_window.c	\
\
			./src/actions/action_menu_page.c		\
			./src/actions/action_game_page.c		\
			./src/actions/action_intro_page.c		\
			./src/actions/action_setting_page.c		\
\
			./src/sprites/sprite_menu_page.c		\
			./src/sprites/sprite_credit_page.c 	\
			./src/sprites/sprite_intro.c	\
			./src/sprites/sprite_inventory.c	\
			./src/sprites/sprite_setting.c	\
			./src/sprites/sprite_map_game.c	\
			./src/text/intro_text.c	\
			./src/sprites/animation.c	\
			./src/sprites/move_sprite_rick.c	\
			./src/sprites/move_sprite_guard.c	\
			./src/sprites/sprite_help_page.c	\
\
			./src/buttons/create_button.c			\
			./src/buttons/create_button_2.c			\
			./src/buttons/create_button_3.c	\
			./src/buttons/draw_buttons.c			\
\
			./src/init_elements/init_button.c		\
			./src/init_elements/init_sprite.c	\
\
		./src/parsing/get_buffer.c 	\
		./src/parsing/fill_stat_struct.c 	\
		./src/parsing/map_management/set_direction.c 	\
		./src/parsing/map_management/set_map.c 	\
		./src/parsing/map_management/set_move.c 	\
		./src/parsing/map_management/get_index.c 	\

SRCMAC	=	./lib/my/my_getnbr.c	\
			./lib/my/my_put_nbr.c	\
			./lib/my/my_putchar.c	\
			./lib/my/my_putstr.c	\
			./lib/my/my_str_to_word_array.c	\
			./lib/my/my_strcat.c	\
			./lib/my/my_strcmp.c	\
			./lib/my/my_strcpy.c	\
			./lib/my/my_strdup.c	\
			./lib/my/my_strlen.c	\
			./lib/my/my_strncpy.c	\
			./lib/my/free_tab.c	\

SILENT	=	@

CC 		=	$(SILENT)gcc

RM 		=	$(SILENT)rm -f

MAK		=	$(SILENT)make -C

NAME	=	my_rpg

LIBFLAGS 	=	-Llib/ -lmy

FLAGCSFML 	= 	-lcsfml-system -lcsfml-graphics -lcsfml-audio -lcsfml-window

CFLAGS 		= 	-Wall -Wextra

CPPFLAGS	= 	-iquote./include/

OBJ 	=	$(SRC:.c=.o)

OBJMAC	=	$(SRCMAC:.c=.o)

all:	$(NAME)

make_lib:
	$(MAK) ./lib/my

$(NAME): make_lib	$(OBJ)
	$(CC) $(SRC) -o $(NAME) $(CFLAGS) $(CPPFLAGS) $(FLAGCSFML) $(LIBFLAGS)

mac: CFLAGS	+=	-Wno-deprecated
mac: CFLAGS	+=	-std=c99
mac:	$(OBJ) $(OBJMAC)
	$(MAK) ./lib/my update_include
	$(CC) -o $(NAME) $(OBJ) $(OBJMAC) $(CFLAGS) $(CPPFLAGS) $(FLAGCSFML)

clean:
	$(RM) $(OBJ)
	$(MAK) ./lib/my clean

fclean:	clean
	$(RM) $(NAME)
	$(MAK) ./lib/my fclean

re:	fclean all

rac: fclean mac

debug:	CFLAGS	+=	-g3
debug:	all

mebug: CFLAGS	+=	-g3
mebug: mac

.PHONY:	re fclean clean all mac debug rac mebug
