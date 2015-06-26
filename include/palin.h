/*
** parser.h for parser in /home/pacaud_j/rendu/Synthese/include
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Mon Jun 15 13:59:07 2015 Jean-Baptiste Pacaud-Paris
** Last update Wed Jun 24 10:04:17 2015 Jean-Baptiste Pacaud-Paris
*/

#ifndef			PALIN_H_
# define		PALIN_H_

# include		<stdio.h>
# include		<stdlib.h>
# include		<unistd.h>
# include		"../lib/my.h"
# include		<sys/stat.h>
# include		<fcntl.h>
# include		<string.h>
# include		<sys/wait.h>

void		my_error_putchar(char);
void		my_error_putstr(char *);
int 		my_init(char **);
int 		my_palin(char **);
int 		is_palin(char *);
int 		P(char, char *);
char 		*my_catch_nbrbase(int, char *);
char 		*fill_base(int);
char 		*my_revstr(char *str);
char 		*my_equal(char *, char *);
char 		*add(char *, char *, char *);

#endif
