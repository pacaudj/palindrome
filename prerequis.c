/*
** prerequis.c for prerequis in /home/pacaud_j/rendu/Synthese/palindrome
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Sat Jun 27 09:05:04 2015 Jean-Baptiste Pacaud-Paris
** Last update Sat Jun 27 09:05:06 2015 Jean-Baptiste Pacaud-Paris
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

int	my_factrec_synthese(int nb)
{
  int res;

  res = 1;
  if (nb > 12)
    return (0);
  if (nb < 0)
    return (0);
  res = rec(nb, res);
  return (res);
}

int	my_squareroot_synthese(int nb)
{
  int	sroot;

  sroot =1;
  if (nb <= 0)
    return (0);
  while (sroot * sroot < nb)
    sroot++;
  if (sroot * sroot == nb)
    return (sroot);
  return (0);
}
