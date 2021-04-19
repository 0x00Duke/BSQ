##
## EPITECH PROJECT, 2020
## bsq
## File description:
## makefile
##

NAME	=	bsq

SRC	=	src/main.c			 					\
		src/bsq/bsq.c							\
		src/bsq/file_size.c	 					\
		src/bsq/error.c							\
		src/bsq/get_supposed_number_of_lines.c	\
		src/bsq/get_nbr_lines.c					\
		src/bsq/check_number_lines.c			\
		src/bsq/buff_to_array.c					\
		src/bsq/size_of_line.c					\
		src/bsq/get_array.c						\
		src/bsq/copy_line.c						\
		src/bsq/get_value_map.c					\
		src/lib/my_putchar.c 					\
		src/lib/my_put_nbr.c					\
		src/lib/my_putstr.c						\
		src/lib/my_strlen.c						\
		src/lib/my_getnbr.c						\
		src/lib/print_array.c					\
		src/lib/free_array.c					\
		src/lib/print_int_array.c				\
		src/lib/big_out_of_3.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I ./includes/
CFLAGS	+=	-pedantic
CFLAGS	+=	-W -Wall -Wextra -Werror 

CC	=	gcc

RM	=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
