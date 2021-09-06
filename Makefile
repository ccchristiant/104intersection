##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## ctran
##

SRC	=	$(SRCDIR)104intersection.c	\
		$(SRCDIR)surface.c		\
		$(SRCDIR)man.c			\
		$(SRCDIR)main.c

OBJ	=	$(SRC:.c=.o)

TEST	=	$(TESTDIR)104intersection.c

SRCDIR	=	src/

TESTDIR	=	tests/

BINTEST	=	unit_tests

CC	=	gcc

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-Iinclude -g3

LDFLAGS	=	-Llib/my

LDLIBS	=	-lm -lmy -lcriterion

NAME	=	104intersection

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) $(CPPFLAGS)

unit_tests:	fclean $(NAME)
	$(CC) -o $(BINTEST) $(OBJ) $(LDFLAGS) $(LDLIBS) $(CPPFLAGS)

run_tests:	$(NAME)
	./$(BINTEST)

clean:
	make -C lib/my clean
	rm -f $(OBJ)

fclean:	clean
	make -C lib/my fclean
	rm -f $(NAME) $(BINTEST)

re:	fclean all

.PHONY: all clean fclean re
