/*
** put_error.c for put_error in /home/pacaud_j/rendu/Synthese/projTester
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Fri Jun 19 09:42:55 2015 Jean-Baptiste Pacaud-Paris
** Last update Fri Jun 19 09:42:56 2015 Jean-Baptiste Pacaud-Paris
*/

#include		"../include/palin.h"

void 			my_error_putchar(char c)
{
  write(2, &c, 1);
}

void 			my_error_putstr(char *str)
{
  int			i;

  i = 0;
  while (str[i] != 0)
    my_error_putchar(str[i++]);
}
