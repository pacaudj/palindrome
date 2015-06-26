/*
** my_strcpy.c for my_strcpy in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Mon Oct  6 10:48:38 2014 Jean-Baptiste Pacaud-Paris
** Last update Fri Mar  6 20:58:04 2015 Jean-Baptiste Pacaud-Paris
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
