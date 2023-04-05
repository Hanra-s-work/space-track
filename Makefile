##
## EPITECH PROJECT, 2023
## rpg
## File description:
## globla
##

CC 		=	gcc

RM 		=	rm -f

NAME	=	my_rpg

all:	$(NAME)

$(NAME):
	make -C ./rpg/
	mv ./rpg/my_rpg ./

clean:
	make clean -C ./rpg/

fclean: clean
	$(RM) $(NAME)
	make fclean -C ./rpg/

re:	fclean all

.PHONY:	re fclean clean all
