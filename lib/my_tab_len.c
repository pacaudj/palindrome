/*
** my_tab_len.c for my_tab_len in /home/pacaud_j/rendu/Synthese/FASTAtools/lib
** 
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
** 
** Started on  Wed Jun 24 15:04:56 2015 Jean-Baptiste Pacaud-Paris
** Last update Wed Jun 24 15:07:08 2015 Jean-Baptiste Pacaud-Paris
*/

#include	<stdio.h>

int		my_tab_len(char **str)
{
  int		i;

  i = 0;
  while(str[i] != NULL)
    i++;
  return (i);
}
