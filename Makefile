# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: simoncleerdin <simoncleerdin@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/08 14:37:12 by simoncleerd   #+#    #+#                  #
#    Updated: 2022/02/17 16:04:20 by scleerdi      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCE = ft_printf
SOURCE := $(SOURCE:%=%.c)
OBJECT := $(SOURCE:%.c=%.o)
T_SRC := ft_printf_tests/*.c

all: $(NAME)

$(NAME): $(OBJECT)
	@echo "Compiling libftprintf"
	@make -C Libft/
	@cp Libft/libft.a $(NAME)
	@ar -rcs $(NAME) $(OBJECT)

$(OBJECT): $(SOURCE)
	@gcc -Wall -Werror -Wextra -c $(SOURCE) -I Includes/

debug: $(T_SRC) $(NAME)
	gcc $(T_SRC) $(NAME) Libft/libft.a -I includes

run: debug
	echo 'FT:' > ftoutput.txt
	./a.out ft >> ftoutput.txt
	echo 'REG:' > regoutput.txt
	./a.out reg >> regoutput.txt
	diff -y ftoutput.txt regoutput.txt

clean:
	@-rm -f $(OBJECT)
	@make -C Libft/ clean

fclean: clean
	@-rm -f $(NAME)
	@make -C Libft/ fclean

re: fclean all

.PHONY: all bonus clean fclean re
