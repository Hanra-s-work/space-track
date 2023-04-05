##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## lib
##

CC = 	gcc

RM = 	rm -f

SRC = 	my_putchar.c \
		my_putstr.c \
		my_put_nbr.c \
		my_strlen.c \
		my_getnbr.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strcpy.c \
		my_strncpy.c \
		my_show_word_array.c \
		my_str_to_word_array.c \
		my_strcat.c \

OBJ = $(SRC:.c=.o)

NAME = libmy.a

CFLAG = -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../$(NAME)
	cp $(NAME) ../../$(NAME)
	cp my.h ../../include/
	make clean

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)
	$(RM) ../../$(NAME)

re: fclean all

.PHONY: re all fclean clean
