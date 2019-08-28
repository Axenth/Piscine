# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jlensing <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/22 12:56:43 by jlensing       #+#    #+#                 #
#    Updated: 2019/08/22 19:52:27 by jlensing      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRCS = src/main.c src/basic_functions.c

HEADERS = headers/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -I $(HEADERS) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all