/*
** my_putstr.c for my_putstr in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Thu Oct  2 17:33:32 2014 Jean-Baptiste Pacaud-Paris
** Last update Wed Jun 17 14:52:26 2015 Jean-Baptiste Pacaud-Paris
*/

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    my_putchar(str[i++]);
}
