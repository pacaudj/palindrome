/*
** rev_palin.c for rev_palin in /home/pacaud_j/rendu/Synthese/palindrome
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Sat Jun 27 13:02:10 2015 Jean-Baptiste Pacaud-Paris
** Last update Sat Jun 27 13:02:11 2015 Jean-Baptiste Pacaud-Paris
*/

#include		"../include/palin.h"

int 			my_rev_palin(char **arg, char **param)
{
  int 			i;
  int 			j;
  char 			*pal;
  char 			*base;
  int 			min;

  my_rev_init(&i, &min, &j);
  (param[2] != NULL) ? min = get_nb(param[2]) : 0;
  base = fill_base(atoi(arg[2]));
  if (is_palin(my_catch_nbrbase(atoi(arg[1]), base)) != 1)
    {
      my_error_putstr("pas de solution\n");
      return (0);
    }
  pal = my_catch_nbrbase(i, base);
  while (strcmp(pal, my_catch_nbrbase(atoi(arg[1]), base)) != 0 || (j > min &&
									   min != -1))
    j = calc_rev_fact(&pal, base, atoi(arg[1]), &i);
  if (param[1] != NULL && get_nb(param[1]) > i - 1)
    {
      my_error_putstr("pas de solution\n");
      return (0);
    }
  printf("%d donne %d en %d itération(s) (en base %s)\n",
	 (i - 1), my_getnbr_base(pal, base), j, arg[2]);
}

int 			calc_rev_fact(char **pal, char *base, int nb, int *j)
{
  int 			i;

  i = 0;
  *pal = my_catch_nbrbase(*j, base);
  while (my_getnbr_base(*pal, base) < nb)
    {
      *pal = add(*pal, my_revstr(*pal), base);
      i++;
    }
  *j += 1;
  return (i);
}

void			my_rev_init(int *a, int *b, int *c)
{
	*a = 1;
  	*b = -1;
  	*c = 0;
}
