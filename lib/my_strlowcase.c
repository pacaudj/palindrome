/*
** my_strlowcase.c for my_strlowcase in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Tue Oct  7 01:04:18 2014 Jean-Baptiste Pacaud-Paris
** Last update Tue Oct  7 01:11:18 2014 Jean-Baptiste Pacaud-Paris
*/

char	*my_strlowcase(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] <= 'Z') && (str[i] >= 'A'))
        str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
