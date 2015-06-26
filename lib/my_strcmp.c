/*
** my_strcmp.c for myèstrcmp in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Mon Oct  6 15:40:51 2014 Jean-Baptiste Pacaud-Paris
** Last update Sun Feb  1 21:54:30 2015 Jean-Baptiste Pacaud-Paris
*/

int	my_strcmp(char *s1, char *s2)
{
  int	a;
  int	i;

  a = 0;
  i = 0;
  while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
    i++;
  if (s1[i] < s2[i])
    {
      a = (s2[i]) - s1[i];
      a = a * -1;
    }
  if (s1[i] > s2[i])
    a = s1[i] - s2[i];
  if (s1[i] == s2[i])
    a = 0;
  return (a);
}
