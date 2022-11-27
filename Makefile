# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cwesseli <cwesseli@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/10 09:28:26 by cwesseli      #+#    #+#                  #
#    Updated: 2022/11/01 13:36:46 by cwesseli      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= clang
AR			= ar -rsc
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror
LIBFT		= ./libft/libft.a
LIBFTDIR	= ./libft/

OBJ_FILES	=	$(addprefix obj/, ft_printf.o ft_printf_chr_functions.o ft_printf_dec_functions.o\
						ft_printf_checks.o ft_printf_itoa.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_FILES) 
	$(AR) $(NAME) $(OBJ_FILES)

$(OBJ_FILES): obj/%.o: %.c 
		@mkdir -p $(dir $@)
		$(CC) -c $(CFLAGS) -o $@ $< 

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR) all
	cp $(LIBFT) $(NAME)

clean:
	@$(RM) obj/
	@$(MAKE) -C $(LIBFTDIR) clean
	
fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFTDIR) fclean

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY:	all bonus clean fclean re
