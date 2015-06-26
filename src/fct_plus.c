/*
** fct_plus.c for fct_plus in /home/pacaud_j/rendu/Synthese/palindrome
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Fri Jun 26 16:42:31 2015 Jean-Baptiste Pacaud-Paris
** Last update Fri Jun 26 16:42:32 2015 Jean-Baptiste Pacaud-Paris
*/

#include		"../include/palin.h"

char    *my_equal(char *nb1, char *nb2)
{
  int   i;
  int   j;
  char  *res;

  j = my_strlen(nb2);
  i = 0;
  res = malloc(j * sizeof(char) + 1);
  while (i != (my_strlen(nb2) - my_strlen(nb1)))
    {
      res[i] = '0';
      i++;
    }
  j = 0;
  while (i != my_strlen(nb2))
    {
      res[i] = nb1[j];
      j++;
      i++;
    }
  return (res);
}

int     P(char c, char *base)
{
  int   i;

  i = 0;
  while (base[i] != c)
    i++;
  return (i);
}

char    *add(char *nb1, char *nb2, char *base)
{
  char  *result;
  int   ret;
  int   i;

  i = 0;
  ret = 0;
  nb1 = strdup(nb1);
  nb2 = strdup(nb2);
  if (my_strlen(nb1) > my_strlen(nb2))
    {
      nb2 = my_revstr(my_equal(nb2, nb1));
      nb1 = my_revstr(nb1);
    }
  else
    {
      nb1 = my_revstr(my_equal(nb1, nb2));
      nb2 = my_revstr(nb2);
    }
  result = malloc(my_strlen(nb1) + my_strlen(nb2));
  while (*nb1 && *nb2)
    {
      result[i++] = base[((P(*nb1, base) + P(*nb2, base) + ret) % my_strlen(base))];
      ret = (P(*nb1++, base) + P(*nb2++, base) + ret) / my_strlen(base);
    }
  if (ret == 1)
    result[i++] = base[1];
  result[i] = '\0';
  return (my_revstr(result));
}
