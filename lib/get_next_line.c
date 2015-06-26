/*
** get_next_line.c for get_next_line in /home/pacaud_j/rendu/Synthese/src
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Mon Jun 15 14:16:43 2015 Jean-Baptiste Pacaud-Paris
** Last update Fri Jun 19 10:12:52 2015 Jean-Baptiste Pacaud-Paris
*/

#define BUFFSIZE    1024
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

char            *get_next_line(int fd)
{
  char          buff[2];
  char          *str;
  char          *tmp;
  int           size;

  size = 0;
  ((str = malloc(sizeof(char))) == NULL) ? printf("fail") : 0 ;
  str[0] = '\0';
  while ((read(fd, buff, 1)) > 0)
    {
      size++;
      (size == 1000) ? printf("Nope.\n") : 0 ;
      buff[1] = 0;
      if (buff[0] == '\n')
	return (my_strcat(str, "\0"));
      else
	{
	  tmp = str;
	  str = my_strcat(str, buff);
	  free(tmp);
	}
    }
  return (NULL);
}
