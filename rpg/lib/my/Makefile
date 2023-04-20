##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## lib
##

SRC = 	my_putchar.c \
		my_putstr.c \
		my_put_nbr.c \
		my_strlen.c \
		my_getnbr.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strcpy.c \
		my_strncpy.c \
		my_str_to_word_array.c \
		my_strcat.c \
		my_strdup.c \
		free_tab.c \
		my_strdup.c

SILENT	=	@

CC	=	$(SILENT)gcc

RM	=	$(SILENT)rm -f

COPY	=	$(SILENT)cp

ARCHIVE	=	$(SILENT)ar rc

NAME = libmy.a

CFLAG = -Wall -Wextra

OBJ = $(SRC:.c=.o)

all: update_include $(NAME) update_lib

$(NAME): $(OBJ)
	$(ARCHIVE) $(NAME) $(OBJ)

update_include:
	$(COPY) my.h ../../include/

update_lib:
	$(COPY) $(NAME) ../$(NAME)
	$(COPY) $(NAME) ../../$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)
	$(RM) ../../$(NAME)

re: fclean all

.PHONY: re all fclean clean update_include update_lib
