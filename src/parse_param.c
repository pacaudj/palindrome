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
