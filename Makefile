# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvermand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/03 19:21:12 by cvermand          #+#    #+#              #
#    Updated: 2018/11/03 21:55:22 by cvermand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= rtv1

CC			=	gcc
##FLAGS		=	-Wall -Werror -Wextra -g3
FLAGS		= 
_SRC		=	main.c 
##init_env.c exit.c ratio.c sphere.c
_HEADER		=	rtvone.h
_LIBFT		=	libft.a
_MLX		= 	libmlx.a

SRC_DIR		=	./src/
HEADER_DIR	=	./includes/
LIB_DIR		=	./libft/
MLX_DIR		=	./minilibx_macos/
OBJ_DIR 	=	./build/

SRC			=	$(addprefix $(SRC_DIR), $(_SRC))
HEADER		=	$(addprefix $(HEADER_DIR), $(_HEADER))
LIBFT		=	$(addprefix $(LIB_DIR), $(_LIBFT))
MLX			=	$(addprefix $(MLX_DIR), $(_MLX))

OBJECTS 	=	$(patsubst %.c,$(OBJ_DIR)%.o,$(_SRC))
RM			=	/bin/rm

NORMAL = "\x1B[0m"
RED = "\x1B[31m"
GREEN = "\x1B[32m"
YELLOW = "\x1B[33m"
BLUE = "\x1B[34m"
MAGENTA = "\x1B[35m"
CYAN = "\x1B[36m"
WHITE = "\x1B[37m"

all : $(LIBFT) $(MLX) $(NAME)

$(NAME) : $(OBJECTS) $(HEADER)
	@printf  "\033[92m\033[1:32mCompiling -------------> \033[91m$(NAME)\033[0m:\033[0m%-16s\033[32m[✔]\033[0m\n"
	@$(CC) $(CFLAGS) $(OBJECTS) -framework OpenGL -framework AppKit \
	-L$(LIB_DIR) -lft -L$(MLX_DIR) \
	-lmlx -lm -D_REENTRANT -lpthread -o $(NAME)

$(OBJECTS) : | $(OBJ_DIR)

$(LIBFT):
	@make -C $(LIB_DIR)

$(MLX):
	@make -C $(MLX_DIR)

$(OBJ_DIR):
	@mkdir -p $@

$(OBJECTS) : $(SRC) $(HEADER)
	@printf  "\033[1:92mCompiling $(NAME)\033[0m %-31s\033[32m[$<]\033[0m\n" ""
	@$(CC) $(CFLAGS) -c $< -o $@ -I includes/
	@printf "\033[A\033[2K"

clean:
	@make fclean -C $(LIB_DIR)
	@make fclean -C $(MLX_DIR)
	@/bin/rm -rf $(OBJ_DIR)
	@printf  "\033[1:32mCleaning object files -> \033[91m$(NAME)\033[0m\033[1:32m:\033[0m%-16s\033[32m[✔]\033[0m\n"

fclean: clean
	@/bin/rm -f $(NAME)
	@printf  "\033[1:32mCleaning binary -------> \033[91m$(NAME)\033[0m\033[1:32m:\033[0m%-16s\033[32m[✔]\033[0m\n"

re:
	@make fclean
	@make

.PHONY: all clean fclean re
