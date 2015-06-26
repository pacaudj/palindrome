/*
** get_nbr_base.c for get_nbr_base in /home/pacaud_j/rendu/Synthese/palindrome
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Fri Jun 26 18:28:28 2015 Jean-Baptiste Pacaud-Paris
** Last update Fri Jun 26 18:28:31 2015 Jean-Baptiste Pacaud-Paris
*/

#include		"../include/palin.h"

int     		my_getnbr_base(char *str, char *base)
{
  int   nbr;
  int   size;
  int   i;
  int   j;


  size = strlen(base);
  i = 0;
  nbr = 0;
  while (str[i])
    {
      j = 0;
      while (j < size && base[j] != str[i])
	j = j + 1;
      if (base[j] == str[i])
	nbr = nbr * size + j;
      else
	if ((str[i] != '-' && str[i] != '+'))
	  return (0);
      i++;
    }
  return (nbr);
}
