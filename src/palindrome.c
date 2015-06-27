/*
** palindrome.c for palindrome in /home/pacaud_j/rendu/Synthese/palindrome/src
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Fri Jun 26 15:40:05 2015 Jean-Baptiste Pacaud-Paris
** Last update Fri Jun 26 15:40:06 2015 Jean-Baptiste Pacaud-Paris
*/

#include		"../include/palin.h"

int			my_palin(char **arg, char **param)
{
  int 			nb;
  char 			*base;
  char 			*pal;
  int 			i;

  i = 0;
  base = fill_base(atoi(arg[2]));
  nb = atoi(arg[1]);
  pal = my_catch_nbrbase(nb, base);
  if (param != NULL && param[0] != NULL)
    {
      my_rev_palin(arg, param);
      return (0);
    }
  while (is_palin(pal) == 0 && my_getnbr_base(pal, base) >= 0)
    {
      pal = add(pal, my_revstr(pal), base);
      i++;
    }
  verif_solu(i, param);
  if (my_getnbr_base(pal, base) < 0)
    {
      my_error_putstr("overflow\n");
      return (1);
    }
  printf("%s donne %d en %d itération(s) (en base %s)\n",
	 arg[1], my_getnbr_base(pal, base), i, arg[2]);
  return (1);
}

char 			*fill_base(int base)
{
  char 			*res;
  int 			i;

  i = -1;
  if ((res = malloc(base + 1)) == NULL)
    return (NULL);
  while (++i != base)
    res[i] = i + '0';
  res[i] = 0;
  return (res);
}

char 			*my_catch_nbrbase(int nbr, char *base)
{
  int   		div;
  int   		res;
  int   		size;
  char 			*res_str;
  int 			i;

  i = 0;
  if ((res_str = malloc(300)) == NULL)
    return (NULL);
  size = my_strlen(base);
  div = 1;
  while ((nbr / div) >= size)
    div = div * size;
  while (div > 0)
    {
      res = nbr / div % size;
      res_str[i++] = base[res];
      div = div / size;
    }
  res_str[i] = 0;
  return (res_str);
}

int 			is_palin(char *str)
{
  char 			*tmp;

  if (str == NULL)
    return (0);
  tmp = my_revstr(str);
  if (strcmp(tmp, str) == 0)
    return (1);
  return (0);
}

char                    *my_revstr(char *str)
{
  int                   i;
  int                   size;
  char                  *tmp;

  i = 0;
  if (str == NULL)
    return (NULL);
  size = strlen(str);
  if ((tmp = malloc(size + 1)) == NULL)
    return (NULL);
  while (size != -1)
    tmp[i++] = str[--size];
  tmp[i] = 0;
  return (tmp);
}
