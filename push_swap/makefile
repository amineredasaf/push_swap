NAME = push_swap
BNS =  checker
CC = cc -Wall -Wextra -Werror
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
		./moves/double_rotate.c ./moves/double_swap.c\
		./moves/double_rrotate.c\

SOR = ./sort/sort_three.c ./sort/sort_five.c ./sort/sort_circle.c\
		./sort/sorting.c ./sort/sort_hundred.c ./sort/push_chunks.c\
		./sort/if_circle.c ./sort/sort_the_chunk.c\

GNl = ./gnl/get_next_line.c\

MAN = $(SRS)

FILES= $(PAR) $(UTI) $(MVS) $(SOR)

FILES_B = $(GNl) ./checker.c\

MAN_O = $(MAN:.c=.o)
OBJ = $(FILES:.c=.o)
BNS_O = $(FILES_B:.c=.o)

all: $(NAME)
bonus: $(BNS)
$(NAME): $(OBJ) $(MAN_O) push_swap.h
	$(CC) $(OBJ) $(MAN_O) -o $@
%.o: %.c push_swap.h
	cc -c $< -o $@
$(BNS): $(BNS_O) $(OBJ) push_swap.h
	$(CC) $(OBJ) $(BNS_O) -o $(BNS)

clean:
	rm -rf $(OBJ) 
	rm -rf $(BNS_O)
	rm -rf $(MAN_O)
fclean: clean
		rm -rf $(NAME)
		rm -rf $(BNS)
		@echo "\n------- rah tms7 koulchi -------"
re: fclean all