# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jlensing <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/20 09:40:59 by jlensing       #+#    #+#                 #
#    Updated: 2019/08/20 09:45:17 by jlensing      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = srcs/ft_operatuer.c srcs/ft_write.c srcs/main.c

HEADERS = headers/

all: $(NAME)

$(NAME):
	gcc -I $(HEADERS) $(SRC) -o $(NAME) -Wall -Werror -Wextra

clean:
	rm -f $(NAME)

fclean: clean

re: clean all