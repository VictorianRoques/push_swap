# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: viroques <viroques@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/12 09:54:12 by viroques          #+#    #+#              #
#    Updated: 2021/05/14 14:00:51 by viroques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = clang
CFLAGS = -Wall -Wextra -Werror
LIBS = libft
IFLAGS = $(INC_DIR:%=-I%) $(LIBS:%=-I%/$(INC_DIR))
RM = rm -rf
SRC_DIR = src
INC_DIR = include
OBJ_DIR = obj

SRC = $(CHECKER) $(PUSH_SWAP) $(MOVES)

CHECKER = init.c error.c check_error.c is_sort.c
PUSH_SWAP = print_push.c print_reverse.c print_rotate.c print_swap.c \
			buble_max.c buble_min.c sort_len_3.c convert_input.c
MOVES = swap.c push.c rotate.c reverse.c

CHECKER := $(CHECKER:%.c=checker/%.c)
PUSH_SWAP := $(PUSH_SWAP:%.c=push_swap/%.c)
MOVES := $(MOVES:%.c=moves/%.c)
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): libs $(OBJ) $(INCLUDE:%.h=$(INC_DIR)/%.h)
	@echo "Compiling $(NAME)..."
	@$(CC) $(IFLAGS) $(CFLAGS) -o checker src/checker.c $(OBJ) -L$(LIBS) -lft -lncurses
	@$(CC) $(IFLAGS) $(CFLAGS) -o push_swap src/push_swap.c $(OBJ) -L$(LIBS) -lft -lncurses
	@echo "$(NAME): COMPILATION SUCCESSFUL"

debug: CFLAGS += -g3
debug: re
sanitize: CFLAGS += -fsanitize=address
sanitize: debug
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(@D)
	@echo "Compiling $@..."
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
libs:
	@echo "Making libs..."
	@$(MAKE) -j -C $(LIBS)
clean:
	@$(RM) $(OBJ_DIR)
	$(MAKE) -C $(LIBS) fclean
fclean: clean
	@$(RM) checker push_swap
	@$(RM) push_swap.dYM checker.dSYM
re : fclean all
.PHONY: all $(NAME) libs clean fclean re