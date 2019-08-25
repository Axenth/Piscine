# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mpeerdem <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/24 10:15:38 by mpeerdem       #+#    #+#                 #
#    Updated: 2019/08/25 13:32:57 by jlensing      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
CC = gcc
FILES = main.c rush_check.c amount_lines.c convert_to_array.c is_rectangle.c write.c print_output.c ft_putnbr.c error_handle.c
SRCMAP = srcs/
SRC = $(addprefix $(SRCMAP),$(FILES))
FLAGS = -Wall -Werror -Wextra
HDR = includes/

all: $(NAME)

$(NAME):
	$(CC) -I $(HDR) $(FLAGS) -o $(NAME) $(SRC)
	
clean:
	@rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
