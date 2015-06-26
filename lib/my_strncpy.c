/*
** my_strncpy.c for my_strncpy in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Mon Oct  6 11:22:47 2014 Jean-Baptiste Pacaud-Paris
** Last update Wed Jun 17 14:51:09 2015 Jean-Baptiste Pacaud-Paris
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int   i;

  i = 0;
  while ((src[i] != 0) && (i < n))
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
