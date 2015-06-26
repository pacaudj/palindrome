/*
** my_strncat.c for my_strncat in /home/pacaud_j/test/test
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Wed Oct  8 15:08:23 2014 Jean-Baptiste Pacaud-Paris
** Last update Wed Jun 17 14:55:11 2015 Jean-Baptiste Pacaud-Paris
*/

char    *my_stnrcat(char *dest, char *src, int nb)
{
  int   sizesrc;
  int   sizedest;
  int   i;

  sizedest = my_strlen(dest);
  sizesrc = my_strlen(src);
  i = 0;
  while ((i != (sizesrc)) && (nb > i))
    {
      dest[(sizedest + i)] = src[i];
      i++;
    }
  dest[sizedest + i] = '\0';
  return (dest);
}
