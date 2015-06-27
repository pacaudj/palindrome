/*
** parse_param.c for parse_param in /home/pacaud_j/rendu/Synthese/palindrome
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Sat Jun 27 11:36:21 2015 Jean-Baptiste Pacaud-Paris
** Last update Sat Jun 27 11:36:22 2015 Jean-Baptiste Pacaud-Paris
*/

#include		"../include/palin.h"

char 			*param_sup(char *res, char *str)
{
  if (res == NULL)
    return (str);
  if (get_nb(str) > get_nb(res))
    return (str);
  if (get_nb(str) == get_nb(res))
    if (str[1] != '=' && res[1] == '=')
      return (str);
  return (res);
}

char 			*param_inf(char *res, char *str)
{
  if (res == NULL)
    return (str);
  if (get_nb(str) < get_nb(res))
    return (str);
  if (get_nb(str) == get_nb(res))
    if (str[1] != '=' && res[1] == '=')
      return (str);
  return (res);
}

void			verif_solu(int i, char **param)
{
  int 			erreur;

  erreur = 0;
  if (param == NULL)
    return ;
  if (param[1] != NULL)
    if (param[1][1] == '=')
      {
	if (get_nb(param[1]) > (i + 1))
	  erreur = 1;
      }
    else
      (get_nb(param[1]) > i) ? 	erreur = 1 : 0;
  if (param[2] != NULL)
    if (param[2][1] == '=')
      {
	(get_nb(param[2]) < (i + 1)) ? erreur = 1 : 0;
      }
    else
      (get_nb(param[2]) < i) ? erreur = 1: 0;
  if (erreur == 1)
    {
      my_error_putstr("pas de solution\n");
      exit (0);
    }
}
