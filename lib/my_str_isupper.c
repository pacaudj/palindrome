/*
** my_str_isupper.c for my_str_isupper in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Tue Oct  7 06:57:57 2014 Jean-Baptiste Pacaud-Paris
** Last update Tue Oct  7 06:58:32 2014 Jean-Baptiste Pacaud-Paris
*/
int     my_str_isupper(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    if ((str[i] >= 'A') && (str[i] <= 'Z'))
      i++;
    else
      return (0);
  return (1);
}
