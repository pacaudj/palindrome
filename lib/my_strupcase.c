/*
** my_strupcase.c for my_strupcase in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Tue Oct  7 00:15:52 2014 Jean-Baptiste Pacaud-Paris
** Last update Mon Oct 20 13:45:01 2014 Jean-Baptiste Pacaud-Paris
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] <= 'z') && (str[i] >= 'a'))
	str[i] = str[i] - 32;
      i++;
    }
  return (str);
}
