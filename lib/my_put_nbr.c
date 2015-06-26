/*
** my_put_nbr.c for my_put_nbr in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Thu Oct  2 11:49:04 2014 Jean-Baptiste Pacaud-Paris
** Last update Sun Mar 22 21:24:17 2015 Jean-Baptiste Pacaud-Paris
*/

int	my_put_nbr(int nb)
{
int	div;

  div = 1;
  while (nb / div >= 10)
    div = div * 10;
  while (nb > 0)
    {
      my_putchar(nb / div + '0');
      nb = nb - (nb / div) * div;
      div = div / 10;
    }
}
