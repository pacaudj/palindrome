/*
** my_getnbr.c for epur_str in /home/pacaud_j/rendu/SBMLparser/lib
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Wed Jun 17 14:50:40 2015 Jean-Baptiste Pacaud-Paris
** Last update Wed Jun 17 14:50:42 2015 Jean-Baptiste Pacaud-Paris
*/

int	my_getnbr(char *str)
{
  int result;
  int i;
  int mul;
  int x;

  i = 0;
  x = 0;
  mul = 1;
  result = 0;
  while (str[i] != '\0')
    {
      mul = mul * 10;
      i = i + 1;
    }
  mul = mul / 10;
  while (str[x] != '\0')
    {
      result = result + (str[x] - '0') * mul;
      x++;
      mul = mul / 10;
    }
  return (result);
}
