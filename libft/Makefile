# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orachouk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/09 17:18:10 by orachouk          #+#    #+#              #
#    Updated: 2018/10/10 16:08:15 by orachouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SOURCES =*.c

HEADERS = libft.h

OBJECT = $(SOURCES:.c=.o)

$(NAME):
	@$(CC) $(FLAGS) -c $(SOURCES)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@rm -rf $(OBJECT)

fclean: clean
	@rm -fr $(NAME)

re: fclean all

.PHONY: clean fclean
