/*
** main.c for main in /home/pacaud_j/rendu/Synthese/palindrome/src
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Fri Jun 26 15:15:15 2015 Jean-Baptiste Pacaud-Paris
** Last update Fri Jun 26 15:15:17 2015 Jean-Baptiste Pacaud-Paris
*/

#include		"../include/palin.h"

int 			main(int ac, char **av)
{
  if (ac < 3 || atoi(av[1]) < 0 || atoi(av[2]) <= 1 || atoi(av[2]) > 10)
    {
      my_error_putstr("argument invalide\n");
      return (0);
    }
  if (my_init(av) == -1)
    return (0);
  return (0);
}

int 			my_init(char **arg)
{
  my_palin(arg);
}

