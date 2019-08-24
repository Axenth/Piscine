# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jlensing <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/20 13:25:56 by jlensing       #+#    #+#                 #
#    Updated: 2019/08/20 13:28:25 by jlensing      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = eval_expr

SRC = srcs/

HEADER = headers/

all: $(NAME)

$(NAME):
	gcc -o $(NAME) -I $(HEADER) $(SRC)*.c

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all