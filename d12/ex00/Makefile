# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jlensing <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/21 17:10:32 by jlensing       #+#    #+#                 #
#    Updated: 2019/08/22 19:52:13 by jlensing      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = srcs/basic_functions.c srcs/error_handeling.c srcs/main.c

HEADERS = headers/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -I $(HEADERS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all