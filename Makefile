# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 00:18:43 by jealves-          #+#    #+#              #
#    Updated: 2023/10/05 16:52:50 by jealves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	src/push_swap.c \
		src/moves/swap.c \
		src/moves/rotate.c \
		src/moves/reverse_rotate.c \
		src/moves/push.c \
		src/util/stacks.c \
		src/util/msg.c \
		src/util/validate.c \
		src/sorts/sort.c \
		src/sorts/sort_nbrs.c \
		src/util/util.c \
		src/util/clean.c\
		
PROJECT = <$(GREEN)$(NAME)$(RESET)>
			
INCLUDES = include

DIR_LIBFT = libft
INCLUDE_LIB = $(DIR_LIBFT)/include
LIB = $(DIR_LIBFT)/libft.a

CFLAGS = -g -Wall -I $(INCLUDES) -I $(INCLUDE_LIB) -Wextra -Werror #-fsanitize=address
RM= @rm -f

OBJ = $(patsubst %.c,%.o,$(SRC))

%.o: %.c
	@printf "$(PROJECT) compiling $(BLUE)$<$(RESET)\n"
	@$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

lib : 
	@make -s -C $(DIR_LIBFT)

$(NAME) : lib $(OBJ) $(LIB)
	@$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)
	@printf "$(PROJECT) $(GREEN)compiled$(RESET)!\n"


clean :
	@make -s -C $(DIR_LIBFT)  clean
	$(RM) $(OBJ)
	@for file in $(OBJ); do \
        echo "$(PROJECT) deleting $(YELLOW) $$file $(RESET)!"; \
    done
	
fclean : clean
	@make -s -C $(DIR_LIBFT) fclean
	$(RM) $(NAME)
	@printf "$(PROJECT) $(YELLOW) deleting $(NAME) $(RESET)!\n"
	
	
re : fclean all

.PHONY : all clean fclean bonus re

### COLORS ###

RED = \033[0;31m
GREEN = \033[0;92m
YELLOW = \033[93m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[96m
RESET = \033[0m