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
  if (ac < 3 || atoi(av[1]) < 0 || atoi(av[2]) <= 1 || atoi(av[2]) > 10 ||
    	my_str_isalphanum(av[1]) == 1 || my_str_isalphanum(av[2]) == 1)
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
  char 			**param;
  int 			i;

  i = 0;
  param = NULL;
  if (verif_arg(arg) == -1)
    return (0);
  param = get_param(arg);
  my_palin(arg, param);
}

int 			verif_arg(char **arg)
{
  int 			i;

  i = 3;
  while (arg[i] != NULL)
    {
      if (strcmp(arg[i], "reverse") != 0 && strncmp(arg[i], ">", 1) != 0 &&
      strncmp(arg[i], ">=", 2) != 0 && strncmp(arg[i], "<", 1) != 0 &&
	strncmp(arg[i], "<=", 2) != 0)
	{
	  my_error_putstr("argument invalide\n");
	  return (-1);
	}
      i++;
    }
  return (0);
}

char 			**get_param(char **arg)
{
  int 			i;
  char 			**param;

  i = 2;
  param = NULL;
  while (arg[++i] != NULL)
    param = my_tab_realloc(param, arg[i]);
  if (i == 3)
    return (NULL);
  param = tri_value(param);
  i = -1;
  while (param[++i] != NULL)
    if (is_param_ok(param[i]) != 1)
      {
	my_error_putstr("argument invalide\n");
	exit(0);
      }
  i = 0;
  param = clean_param(param);
  return (param);
}
