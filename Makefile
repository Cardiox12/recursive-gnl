CC		= gcc

SRC_DIR	= srcs
INC_DIR = includes

SRCS	= main.c
SRCS	+= $(SRC_DIR)/get_next_line.c
HEADERS	= $(INC_DIR)/get_next_line.h

NAME	= get_next_line

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	@$(CC) -o $(NAME) $(SRCS) -I $(INC_DIR)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all
