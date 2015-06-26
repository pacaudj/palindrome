/*
** my_squareroot_synthese.c for squareroot in /home/pacaud_j/rendu/Synthese/palindrome
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Fri Jun 26 14:03:56 2015 Jean-Baptiste Pacaud-Paris
** Last update Fri Jun 26 14:17:49 2015 Jean-Baptiste Pacaud-Paris
*/

int	sroot(int nb)
{
  int	sroot;

  sroot =1;
  while (sroot * sroot < nb)
    sroot++;
  if (sroot * sroot == nb)
    return (sroot);
  return (0);
}
