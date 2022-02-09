# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: simoncleerdin <simoncleerdin@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/08 14:37:12 by simoncleerd   #+#    #+#                  #
#    Updated: 2022/02/09 17:56:34 by scleerdi      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCE = ft_printf
SOURCE := $(SOURCE:%=%.c)
OBJECT := $(SOURCE:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECT)
	@echo "Compiling libftprintf"
	@make -C Libft/
	@ar -rcs $(NAME) $(OBJECT)

$(OBJECT): $(SOURCE)
	@gcc -Wall -Werror -Wextra -c $(SOURCE)

clean:
	@-rm -f $(OBJECT)
	@make -C Libft/ clean

fclean: clean
	@-rm -f $(NAME)
	@make -C Libft/ fclean

re: fclean all

.PHONY: all bonus clean fclean re
