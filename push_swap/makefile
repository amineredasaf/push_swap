NAME = push_swap
CC = cc -Wall -Wextra -Werror -g
PRINT = printstack.c
SRS = push_swap.c 
PAR = ./parsing/parsing.c ./parsing/check_char.c\
		./parsing/check_doub.c ./parsing/to_intgers.c\
		./parsing/to_string.c ./parsing/to_splitted.c\

UTI = ./utils/ft_atoi.c ./utils/ft_join.c ./utils/ft_putstr.c\
		./utils/lst_back.c ./utils/lst_new.c ./utils/ft_split.c\
		./utils/lst_lent.c ./utils/lst_front.c ./utils/ft_error.c\
		./utils/last_value.c ./utils/lst_last_node.c ./utils/find_index.c\
		./utils/take_to_top.c ./utils/top_compare.c ./utils/ft_strcmp.c\
		./utils/ft_strlen.c  ./utils/ft_strdup.c ./utils/ft_strchr.c\
		./utils/lst_free.c ./utils/if_sorted.c\

MVS = ./moves/swap.c ./moves/rotate.c\
		./moves/reverse_rotate.c ./moves/push.c\
		./moves/double_rotate.c\

SOR = ./sort/sort_three.c ./sort/sort_five.c ./sort/sort_circle.c\
		./sort/sorting.c ./sort/sort_hundred.c ./sort/push_chunks.c\
		./sort/if_circle.c ./sort/sort_the_chunk.c\

GNl = ./gnl/get_next_line.c\

FILES= $(SRS) $(PAR) $(UTI) $(INS) $(MVS) $(SOR)
BOU_FILES = $(GNl) $(MVS) $(UTI) checker.c $(PAR)
OBJ = $(FILES:.c=.o)
BOU_OBJ = $(BOU_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) push_swap.h
	$(CC) $(OBJ) -o $@
%.o: %.c push_swap.h
	cc -c $< -o $@
bonus: $(BOU_OBJ)
	$(CC) $(BOU_OBJ) -o checker

clean:
	rm $(OBJ) $(BOU_OBJ)
fclean: clean
	rm $(NAME) checker
	clear
re: fclean all