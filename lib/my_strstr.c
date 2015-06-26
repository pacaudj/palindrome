/*
** my_strstr.c for my_strstr in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Sat Oct 11 11:26:32 2014 Jean-Baptiste Pacaud-Paris
** Last update Sun Mar  8 15:34:09 2015 Jean-Baptiste Pacaud-Paris
*/

#include <stdlib.h>
#include <stdio.h>

char	*my_strstr(char *str, char *to_find)
{
  int	j;
  int	i;
  int	len;

  j = 0;
  len = my_strlen(to_find);
  i = 0;
  while (str[i] != 0)
    {
      while (str[i] == to_find[j])
	{
	  i++;
	  j++;
	}
      if (j == len)
	return (str + i);
      j = 0;
      i++;
    }
  return (NULL);
}
