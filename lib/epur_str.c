/*
** epur_str.c for epur_str in /home/pacaud_j/rendu/PSU/PSU_2014_minishell1/source
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Sun Feb  1 15:03:04 2015 Jean-Baptiste Pacaud-Paris
** Last update Wed Jun 17 14:43:12 2015 Jean-Baptiste Pacaud-Paris
*/

#include <stdlib.h>
#include <stdio.h>

int	is_word(char *str, int i)
{
  while (str[i] == ' ')
    i++;
  if (str[i] != 0)
    return (0);
  return (1);
}

char	*is_tabu(char *str)
{
  int   i;

  i = 0;
  while (str[i] != 0)
    {
      (str[i] == '\t') ? str[i] = ' ' : 0;
      i++;
    }
  return (str);
}

char    *epur_str(char *str)
{
  int   i;
  int   j;
  char  *dest;

  i = 0;
  j = 0;
  if (str == NULL)
    return (NULL);
  str = (is_tabu(str));
  if ((dest = malloc(my_strlen(str) + 1)) == NULL)
    return (NULL);
  while (str[i] == ' ')
    i++;
  while (str[i] != 0)
    {
      while (str[i] != ' ' && str[i] != 0)
	dest[j++] = str[i++];
      (is_word(str, i) == 0) ? dest[j++] = ' ' : 0;
      while (str[i] == ' ')
	i++;
    }
  dest[j] = 0;
  return (dest);
}
