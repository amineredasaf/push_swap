NAME = push_swap
CC = cc -Wall -Wextra -O3 -g
PRINT = printstack.c
SRS = push_swap.c ft_error.c sorting.c sort_three.c
PAR = ./parsing/parsing.c ./parsing/check_char.c ./parsing/check_doub.c ./parsing/to_intgers.c\
		./parsing/to_string.c ./parsing/to_splitted.c
UTI = ./utils/ft_atoi.c ./utils/ft_join.c ./utils/lst_back.c ./utils/lst_new.c ./utils/ft_split.c\
		./utils/lst_lent.c ./utils/lst_front.c
MVS = ./moves/swap.c ./moves/rotate.c ./moves/reverse_rotate.c ./moves/push.c
FILES= $(SRS) $(PAR) $(UTI) $(INS) $(PRINT) $(MVS)
OBJ = $(FILES:.c=.o)

all: $(NAME) clean

$(NAME): $(OBJ)
	$(CC) $(FILES) -o $@
%.o: %.c push_swap.h
	cc -c $< -o $@
ok:
	./$(NAME) 1 2 3
dob:
	./$(NAME) 1 2 3 3
char:
	./$(NAME) 1 2 3a
clean:
	rm $(OBJ)
fclean:
	rm $(NAME)
	clear
re: fclean all