/*
** my_strcat.c for my_strcat in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Wed Oct  8 11:13:35 2014 Jean-Baptiste Pacaud-Paris
** Last update Sat Mar  7 16:28:20 2015 Jean-Baptiste Pacaud-Paris
*/

#include <stdio.h>
#include <stdlib.h>

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;
  char	*res;

  i = 0;
  j = 0;
  if ((res = malloc(my_strlen(dest) + my_strlen(src) + 1)) == NULL)
    return (NULL);
  if (dest != NULL)
    while (dest[i] != 0)
      {
	res[i] = dest[i];
	i++;
      }
  if (src != NULL)
    while (src[j] != 0)
      {
	res[i] = src[j];
	i++;
	j++;
      }
  res[i] = 0;
  return (res);
}
