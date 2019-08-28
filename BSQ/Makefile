# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jlensing <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/26 13:27:05 by jlensing       #+#    #+#                 #
#    Updated: 2019/08/28 12:46:52 by jlensing      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = bsq

FILES = main.c error_handeling.c  convert_to_array.c test_print.c delete_file.c 

BASIC_FUNCTIONS_FILES = str_len.c write.c strncpy.c lines_count.c rmnstr.c str_cat.c \
					str_cpy.c strcmp.c ft_putnbr.c atoi.c

READING_FILES = read_input.c read_obstacle_types.c read_map.c 

READ_WRITE_OBSTICAL_FILES = write_obstacle_file.c read_obstacle_file.c 

ALGO_FILES = square_alg.c

SRCMAP = srcs/

BASIC_FUNCTIONS_MAP = srcs/basic_functions/

READING_MAP = srcs/reading_files/

READ_WRITE_OBSTICAL_MAP = srcs/write_read_obstacle_types/

ALGO_MAP = srcs/algo/

BASIC_SRC = $(addprefix $(BASIC_FUNCTIONS_MAP), $(BASIC_FUNCTIONS_FILES))

SRC = $(addprefix $(SRCMAP), $(FILES))

READING_SRC = $(addprefix $(READING_MAP), $(READING_FILES))

READ_WRITE_OBSTICAL_SRC = $(addprefix $(READ_WRITE_OBSTICAL_MAP), $(READ_WRITE_OBSTICAL_FILES))

ALGO_SRC = $(addprefix $(ALGO_MAP), $(ALGO_FILES))

HEADERS = headers/

EXAMPLES = examples/

CC = GCC -g -Wall -Werror -Wextra -g -o $(NAME) $(SRC) $(BASIC_SRC) $(READING_SRC) $(READ_WRITE_OBSTICAL_SRC) $(ALGO_SRC) srcs/debug/write_debug.c -I $(HEADERS)

all: $(NAME)

$(NAME):
	@$(CC)

clean:
	@rm -f *.o
	@rm -f *.ob
	@rm -f *.co
	@rm -f *.log
	
fclean: clean
	@rm -f $(NAME)

testfiles:
	./bsq $(EXAMPLES)map_10_10_7 | cat -e > test/testfile1.txt
	./bsq $(EXAMPLES)map_100_100_1 | cat -e > test/testfile2.txt
	./bsq $(EXAMPLES)map_100_100_20 | cat -e > test/testfile3.txt
	./bsq $(EXAMPLES)map_50_30_5 | cat -e > test/testfile4.txt
	./bsq $(EXAMPLES)map_1000_1000_10 | cat -e > test/testfile5.txt


re: fclean all
	
fclean_test_files:
	rm -f test/testfile*.txt

re_test_files: clean fclean_test_files testfiles

read_test_files:
	cat test/testfile1.txt
	@echo $
	cat test/testfile2.txt
	@echo $
	cat test/testfile3.txt
	@echo $
	cat test/testfile4.txt

generate_new_examples:
	perl map_generator.pl 10 10 7 > $(EXAMPLES)map_10_10_7
	perl map_generator.pl 100 100 1 > $(EXAMPLES)map_100_100_1
	perl map_generator.pl 100 100 20 > $(EXAMPLES)map_100_100_20
	perl map_generator.pl 50 30 5 > $(EXAMPLES)map_50_30_5
	perl map_generator.pl 1000 1000 10 > $(EXAMPLES)map_1000_1000_10