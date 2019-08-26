# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jlensing <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/26 13:27:05 by jlensing       #+#    #+#                 #
#    Updated: 2019/08/26 19:55:49 by jlensing      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = bsq

FILES = main.c error_handeling.c read_input.c read_map.c str_cat.c str_cpy.c \
	str_len.c write.c strncpy.c lines_count.c convert_to_array.c test_print.c \
	rmnstr.c

SRCMAP = srcs/

SRC = $(addprefix $(SRCMAP), $(FILES))

HEADERS = headers/

EXAMPLES = examples/

CC = GCC -Wall -Werror -Wextra -o $(NAME) $(SRC) -I $(HEADERS)

all: $(NAME)

$(NAME):
	@$(CC)

clean:
	@rm -f *.o

fclean:
	@rm -f $(NAME)

testfiles:
	./bsq $(EXAMPLES)map_10_10_7 | cat -e > test/testfile1.txt
	./bsq $(EXAMPLES)map_100_100_1 | cat -e > test/testfile2.txt
	./bsq $(EXAMPLES)map_100_100_20 | cat -e > test/testfile3.txt
	./bsq $(EXAMPLES)map_50_30_5 | cat -e > test/testfile4.txt
	./bsq $(EXAMPLES)map_1000_1000_10 | cat -e > test/testfile5.txt


re: fclean all

fcleanTest:
	rm -f test/testfile*.txt

retestfiles: fcleanTest testfiles

readtestfiles:
	cat test/testfile1.txt
	@echo $
	cat test/testfile2.txt
	@echo $
	cat test/testfile3.txt
	@echo $
	cat test/testfile4.txt