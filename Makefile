##
## Makefile for Makefile in /home/pacaud_j/rendu/Synthese
##
## Made by Jean-Baptiste Pacaud-Paris
## Login   <pacaud_j@epitech.net>
##
## Started on  Mon Jun 15 13:28:47 2015 Jean-Baptiste Pacaud-Paris
## Last update Sat Jun 27 11:36:36 2015 Jean-Baptiste Pacaud-Paris
##

SRCS    =	src/main.c		\
		src/put_error.c		\
		src/palindrome.c	\
		src/fct_plus.c		\
		src/get_nbr_base.c	\
		src/usefull_fct.c	\
		src/parse_param.c	\
		src/rev_palin.c

OBJS    =       $(SRCS:.c=.o)

NAME    =       palindrome

CC      =       gcc

CFLAGS  =       -I include/

LDFLAGS =       -L lib/ -lmy

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(SRCS) $(LDFLAGS) $(CFLAGS)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean all

debug	:	CFLAGS += -g -W
debug	:	re
