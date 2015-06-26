/*
** my_factorielle_rec.c for my_factorielle_rec in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Sun Oct 19 18:28:00 2014 Jean-Baptiste Pacaud-Paris
** Last update Fri Jun 26 14:19:40 2015 Jean-Baptiste Pacaud-Paris
*/

int	rec(int nb, int res)
{
  while (nb > 0)
    {
      res = res * nb;
      nb = nb - 1;
      rec(nb, res);
    }
  return (res);
}

int	my_factorielle_rec(int nb)
{
  int	res;
  
  res = 1;
  if (nb > 12)
    return (0);
  if (nb < 0)
    return (0);
  res = rec(nb, res);
  return (res);
}
  
