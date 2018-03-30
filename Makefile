TARGET_PS = push_swap
TARGET_C = checker
MAKEFLAGS += --silent
CC = gcc
LIBFT_PATH = ./libft/
LIBFT_BIN = $(LIBFT_PATH)libft.a
INCLUDE = ./include/
HEADER = -I$(INCLUDE) -I$(LIBFT_PATH)include/
CFLAGS = -Wall -Wextra -Werror $(HEADER)
SRC_PATH = ./src/
CHECKER_PATH = $(SRC_PATH)checker/
PUSH_SWAP_PATH = $(SRC_PATH)push_swap/
RM = rm -f

GENERAL_SRC = \
		advanced_operations.c \
		basic_operations.c \
		args_parsing.c \
		freedom.c \
		printer.c \
		handle_args.c \
		handle_error.c \
		utils.c \
		exec_instruction.c \

PUSH_SWAP_SRC = \
		selection_sort.c \
		quick_sort.c \
		quick_sort_pivot.c \
		op_reducer.c \
		push_all_in_a.c \
		push_swap.c \
		quick_sort_hms.c \
		op_reducer_2.c \

CHECKER_SRC = \
		checker.c \
		instructions_parsing.c \

SRC_OBJ = $(GENERAL_SRC:.c=.o)
PUSH_SWAP_OBJ = $(PUSH_SWAP_SRC:.c=.o)
CHECKER_OBJ = $(CHECKER_SRC:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_OBJ))
PUSH_SWAP = $(addprefix $(PUSH_SWAP_PATH), $(PUSH_SWAP_OBJ))
CHECKER = $(addprefix $(CHECKER_PATH), $(CHECKER_OBJ))

all: $(NAME) $(TARGET_PS) $(TARGET_C)

$(NAME):

$(TARGET_PS): $(SRC) $(PUSH_SWAP)
	make -C $(LIBFT_PATH)
	$(CC) $(CFLAGS) $(PUSH_SWAP) $(SRC) -o $@ $(LIBFT_BIN)

$(TARGET_C): $(CHECKER)
	$(CC) $(CFLAGS) $(CHECKER) $(SRC) -o $@ $(LIBFT_BIN)

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(SRC) $(PUSH_SWAP) $(CHECKER)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(TARGET_C) $(TARGET_PS)

re: fclean all

.PHONY: all clean fclean re
