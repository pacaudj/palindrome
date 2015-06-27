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

  j = -1;
  init_value(&i, &ok);
  if (value[1] == NULL)
    return (value);
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

char 		**clean_param(char **param)
{
  int 		i;
  char 		**res;

  if ((res = malloc(sizeof(char *) * 4)) == NULL)
    return (NULL);
  res[0] = NULL;
  res[1] = NULL;
  res[2] = NULL;
  res[3] = NULL;
  i = 0;
  while (param[i] != NULL)
    {
      if (strcmp(param[i], "reverse") == 0)
	res[0] = param[i++];
      while (param[i] != NULL && param[i][0] == '>')
	res[1] = param_sup(res[1], param[i++]);
      while (param[i] != NULL && param[i][0] == '<')
    	res[2] = param_inf(res[2], param[i++]);
    }
  return (res);
}

int 		get_nb(char *nb)
{
  int 		i;

  i = 0;
  while (nb[i] > '9' || nb[i] < '0')
    i++;
  return (atoi(nb + i));
}
