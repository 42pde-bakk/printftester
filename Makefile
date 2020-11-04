# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pde-bakk <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/02 17:36:51 by pde-bakk      #+#    #+#                  #
#    Updated: 2020/11/04 16:29:08 by peerdb        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = printftester

FLAGS = -Wall -Werror -Wextra

# COLORS
PINK = \x1b[35;01m
BLUE = \x1b[34;01m
YELLOW = \x1b[33;01m
GREEN = \x1b[32;01m
RED = \x1b[31;01m
WHITE = \x1b[31;37m
RESET = \x1b[0m

ifeq ($(shell uname), Linux)
 ECHO = "-e"
endif

all: $(NAME)

$(NAME):
	@echo $(ECHO) "$(YELLOW)Compiling your libftprintf.a"
	@make re -C ../
	@echo $(ECHO) "$(PINK)Compiling my regular.c with your libftprintf.a"
	@$(CC) $(FLGS) regular.c ../libftprintf.a -o $(NAME)
	@echo $(ECHO) $(RESET)

ultimate:
	@echo $(ECHO) "$(YELLOW)Compiling your libftprintf.a"
	@make re -C ../
	@echo $(ECHO) "$(RED)Compiling my ultimate.c with your libftprintf.a"
	@$(CC) $(FLGS) ultimate.c ../libftprintf.a -o $(NAME)
	@echo $(ECHO) "$(RESET)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

