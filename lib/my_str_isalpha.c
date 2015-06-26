/*
** my_str_isalpha.c for my_str_isalpha in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Tue Oct  7 05:41:22 2014 Jean-Baptiste Pacaud-Paris
** Last update Mon Oct 20 13:42:22 2014 Jean-Baptiste Pacaud-Paris
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a') && (str[i] <= 'z'))
	i++;
      else
	if ((str[i] >= 'A') && (str[i] <= 'Z'))
	  i++;
	else
	  return (0);
    }
  return (1);
}
