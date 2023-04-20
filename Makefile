##
## EPITECH PROJECT, 2023
## rpg
## File description:
## globla
##

SILENT	=	@

NAME	=	my_rpg

MOVE	=	$(SILENT)mv

MAK	=	$(SILENT)make -C

all:
	$(MAK) ./rpg/
	$(MOVE) ./rpg/$(NAME) ./$(NAME)

mac:
	$(MAK) ./rpg/ mac
	$(MOVE) ./rpg/$(NAME) ./$(NAME)

clean:
	$(MAK) ./rpg/ clean

fclean: clean
	$(MAK) ./rpg/ fclean
	$(SILENT)rm -f $(NAME)

re: fclean all

rac: fclean mac

debug:
	$(MAK) ./rpg/ debug

mebug:
	$(MAK) ./rpg/ mebug

.PHONY:	re fclean clean all mac mebug debug rac
