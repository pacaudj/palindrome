/*
** my_str_islower.c for my_str_islower in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Tue Oct  7 06:45:21 2014 Jean-Baptiste Pacaud-Paris
** Last update Mon Oct 20 13:42:42 2014 Jean-Baptiste Pacaud-Paris
*/
int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    if ((str[i] >= 'a') && (str[i] <= 'z'))
      i++;
    else
      return (0);
  return (1);
}
