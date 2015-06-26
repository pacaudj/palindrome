/*
** my.h for my in /home/pacaud_j/rendu/PSU/PSU_2014_my_select/include
**
** Made by Jean-Baptiste Pacaud-Paris
** Login   <pacaud_j@epitech.net>
**
** Started on  Wed Jan  7 11:36:19 2015 Jean-Baptiste Pacaud-Paris
** Last update Wed Jun 24 15:06:44 2015 Jean-Baptiste Pacaud-Paris
*/

#ifndef		MY_H_
# define	MY_H_

void	my_putchar(char c);
int     my_isneg(int nb);
int	my_put_nbr(int nb);
int     my_put_nbr(int nb);
void    my_putstr(char *str);
int     my_strlen(char *str);
int     my_getnbr(char *str);
char    *my_strcpy(char *dest, char *src);
char    *my_strncpy(char *dest, char *src, int nb);
char    *my_strstr(char *str, char *to_find);
int     my_strcmp(char *s1, char *s2);
int     my_strncmp(char *s1, char *s2, int nb);
char    *my_strupcase(char *str);
char    *my_strlowcase(char *str);
int     my_str_isalpha(char *str);
int     my_str_islower(char *str);
int     my_str_isupper(char *str);
int     my_str_isprintable(char *str);
int 	my_str_isalphanum(char *str);
char    *my_strcat(char *dest, char *src);
char    *my_strncat(char *dest, char *src);
int	my_getnbr(char *nb);
int	is_word(char *str, int i);
char	*epur_str(char *str);
char	**my_tab_realloc(char **str, char *add);
char	*get_next_line(int fd);
char	**my_str_to_wordtab(char *str, char c);
int	my_tab_len(char **tab);


#endif
