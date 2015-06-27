/*
** my_str_isalphanum.c for my_str_isalphanum.c in /home/pacaud_j/rendu/PSU/PSU_2014_minishell1/fichierlib
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Tue Jan 20 02:36:12 2015 Jean-Baptiste Pacaud-Paris
** Last update Tue Jan 20 02:56:11 2015 Jean-Baptiste Pacaud-Paris
*/

#include "my.h"

int	my_str_isalphanum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] > '9' || str[i] < '0')
	return (1);
      i++;
    }
  return (0);
}
