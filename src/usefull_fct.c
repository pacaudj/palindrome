/*
** usefull_fct.c for usefull_fct in /home/pacaud_j/rendu/Synthese/palindrome
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Sat Jun 27 10:12:15 2015 Jean-Baptiste Pacaud-Paris
** Last update Sat Jun 27 10:12:16 2015 Jean-Baptiste Pacaud-Paris
*/

#include		"../include/palin.h"

char            **tri_value(char **value)
{
  int           i;
  int           j;
  int           ok;

  i = 0;
  j = -1;
  ok = 0;
  while (ok != 1)
    while (value[i] != NULL && value[i + 1] != NULL)
      {
        while (value[i][++j] != 0 && value[i + 1][j] != 0 &&
               value[i][j] == value[i + 1][j]);
        ok = 1;
        if (value[i][j] < value[i + 1][j])
          {
            my_switch(value, i);
            ok = 0;
          }
        i++;
        if (ok == 0)
          i = 0;
        j = -1;
      }
  return (value);
}

char            **my_switch(char **var, int i)
{
  char          *tmp;

  tmp = var[i];
  var[i] = var[i + 1];
  var[i + 1] = tmp;
  return (var);
}

int 		is_param_ok(char *param)
{
  int 		i;

  i = 1;
  if (strcmp(param, "reverse") == 0)
    return (1);
  while (param[i] != 0)
    {
      if (i == 1 && param[i] == '=')
	{
	  i++;
	  if (param[i] == 0)
	    return (0);
	}
      if (param[i] > '9' || param[i] < '0')
	return (0);
      i++;
    }
  if (i < 2)
    return (0);
  return (1);
}
