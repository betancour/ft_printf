NAME = libftprintf.a

CC = cc
CFLAGS := -Wall -Werror -Wextra -Iinclude -I../libft/include
LFLAGS := -Wall -Werror -Wextra -o
LIB_DIR := ../libft
LIB_FLAGS := -L$(LIB_DIR) -lft

SRC_DIR := ./src/
OBJ_DIR := ./obj/
SRC_FILES := $(wildcard $(SRC_DIR)*.c)
OBJ_FILES := $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC_FILES))
OBJS := $(OBJ_FILES)

HEADER := -Iinclude/
RM := rm -f

all: obj $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CC) $(LFLAGS) $(NAME) $(OBJS) $(LIB_FLAGS)

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all obj clean fclean re
