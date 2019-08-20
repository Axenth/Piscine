# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jlensing <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/19 15:19:50 by jlensing       #+#    #+#                 #
#    Updated: 2019/08/20 08:24:34 by jlensing      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADERS = includes/

all: $(NAME)
	
$(NAME):
	gcc -c -I$(HEADERS)*.h $(FILES) -Wall -Werror -Wextra
	ar rc $(NAME) ft_*.o;

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all