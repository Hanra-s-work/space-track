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

SRC		+=	./src/sprites/sprite_menu_page.c		\
			./src/sprites/sprite_credit_page.c 	\
			./src/sprites/sprite_intro.c	\
			./src/text/intro_text.c	\

SRC		+=	./src/buttons/create_button.c			\
			./src/buttons/create_button_2.c			\
			./src/buttons/draw_buttons.c			\

SRC		+=	./src/init_elements/init_button.c		\
			./src/init_elements/init_sprite.c	\

SRC	+=	./src/parsing/get_buffer.c 	\
		./src/parsing/fill_stat_struct.c 	\
		./src/parsing/map_management/set_direction.c 	\
		./src/parsing/map_management/set_map.c 	\
		./src/parsing/map_management/set_move.c 	\

SRC	+=	./src/inventory/add_end_list.c	\
		./src/inventory/disp_inv.c	\
		./src/inventory/set_pos.c	\
		./src/inventory/the_inv.c

SRCMAC	=	$(SRC)

SRCMAC	+=	./lib/my/my_getnbr.c	\
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

OBJ 	=	$(SRC:.c=.o)

OBJMAC	=	$(SRCMAC:.c=.o)

CC 		=	gcc

RM 		=	rm -f

NAME	=	my_rpg

NAMEMAC	=	my_rpg

MACFLAG	=	-Wno-deprecated

LIBFLAGS 	=	-Llib/my/ -lmy

FLAGCSFML 	= 	-lcsfml-system -lcsfml-graphics -lcsfml-audio -lcsfml-window

CFLAGS 		= 	-Wall -Wextra -g3

CPPFLAGS	= 	-I./include/ -I./lib/my/my.h

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

allmac:	$(NAMEMAC)

$(NAMEMAC):	$(OBJMAC)
	$(CC) -o $(NAMEMAC) $(OBJMAC) $(CFLAGS) $(CPPFLAGS) $(FLAGCSFML) $(MACFLAG)

mac: allmac
	$(CC) -o $(NAMEMAC) $(OBJMAC) $(CFLAGS) $(CPPFLAGS) $(FLAGCSFML) $(MACFLAG)

.PHONY:	re fclean clean all mac
