# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cwesseli <cwesseli@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/10 09:28:26 by cwesseli      #+#    #+#                  #
#    Updated: 2022/11/09 13:17:52 by cwesseli      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= clang
AR			= ar -rsc
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror
#INCLUDE		= ../
OBJ_FILES	=		$(addprefix obj/,ft_isalpha.o ft_strlen.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o\
						ft_toupper.o ft_tolower.o ft_atoi.o ft_bzero.o ft_strncmp.o ft_strlcat.o ft_strlcpy.o\
						ft_memchr.o ft_memcmp.o ft_strchr.o ft_strrchr.o ft_memcpy.o ft_memset.o ft_memmove.o\
						ft_strnstr.o  ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_itoa.o\
						ft_putendl_fd.o ft_putstr_fd.o ft_putchar_fd.o ft_striteri.o ft_strmapi.o ft_split.o\
						ft_putnbr_fd.o ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o\
						ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o ft_lstclear_bonus.o\
						ft_lstiter_bonus.o ft_lstmap_bonus.o ft_putchar.o ft_putstr.o ft_isspace.o ft_wordcount.o)
all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(AR) $(NAME) $(OBJ_FILES)

$(OBJ_FILES): obj/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $< -I $(INCLUDE)

clean:
	$(RM) obj/

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY:	all bonus clean fclean re
