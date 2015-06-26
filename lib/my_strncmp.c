/*
** my_strncmp.c for my_strncmp in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Mon Oct  6 18:25:58 2014 Jean-Baptiste Pacaud-Paris
** Last update Sun Mar  8 23:24:03 2015 Jean-Baptiste Pacaud-Paris
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int   i;

  i = 0;
  while (s1[i] != 0 && s2[i] != 0 && i != n)
    {
      if (s1[i] != s2[i])
	return (1);
      i++;
    }
  if (i == n)
    return (0);
  return (1);

}
