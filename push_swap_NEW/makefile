NAME = push_swap
CC = cc -Wall -Werror -Wextra -O3
SRS = push_swap.c ft_error.c
PAR = ./parsing/parsing.c ./parsing/check_char.c ./parsing/check_doub.c ./parsing/to_intgers.c\
		./parsing/to_string.c ./parsing/to_splitted.c
UTI = ./utils/ft_atoi.c ./utils/ft_join.c ./utils/addback.c ./utils/lst_new.c ./utils/ft_split.c\
		./utils/lst_lent.c
INS = ./insert/insert.c
FILES= $(SRS) $(PAR) $(UTI) $(INS)
OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FILES) -o $@
%.o: %.c push_swap.h
	cc -c $< -o $@
clean:
	rm $(OBJ)
fclean: clean
	rm $(NAME)
	clear
re: fclean all