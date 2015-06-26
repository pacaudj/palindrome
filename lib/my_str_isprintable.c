/*
** my_str_isprintable.c for my_str_isprintable in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Tue Oct  7 07:06:59 2014 Jean-Baptiste Pacaud-Paris
** Last update Mon Oct 20 13:43:50 2014 Jean-Baptiste Pacaud-Paris
*/

int	my_str_isprintable(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    if ((str[i] >= 0) && (str[i] >= 32) && (str[i] <= 126))
      i++;
    else
      return (0);
  return (1);
}
