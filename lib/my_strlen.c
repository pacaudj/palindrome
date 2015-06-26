/*
** my_strlen.c for my_strlen in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Thu Oct  2 18:26:28 2014 Jean-Baptiste Pacaud-Paris
** Last update Wed Jun 17 14:54:37 2015 Jean-Baptiste Pacaud-Paris
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] != '\0')
    i++;
  return (i);
}
