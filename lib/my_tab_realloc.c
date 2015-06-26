/*
** my_realloc.c for my_realloc in /home/pacaud_j/rendu/PSU/PSU_2014_minishell2/lib
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Wed Feb  4 17:46:11 2015 Jean-Baptiste Pacaud-Paris
** Last update Mon Jun 15 16:23:06 2015 Jean-Baptiste Pacaud-Paris
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "my.h"

char    **my_tab_realloc(char **tab, char *str)
{
  char  **tab_dest;
  int   i;

  i = 0;
  if (strlen(str) == 0)
    return (tab);
  if ((tab_dest = malloc(sizeof(char*) * (size_tab(tab) + 2))) == NULL)
    return (NULL);
  tab_dest[size_tab(tab) + 1] = NULL;
  while (i < size_tab(tab))
    {
      tab_dest[i] = strdup(tab[i]);
      i++;
    }
  tab_dest[i] = strdup(str);
  return (tab_dest);
}

int     size_tab(char **tab)
{
  int   i;

  i = 0;
  if (tab != NULL)
    while (tab[i] != NULL)
      i++;
  return (i);
}
