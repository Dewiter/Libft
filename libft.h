/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:11:05 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/18 19:47:38 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);

char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(char *str, const char *to_find);
char	*ft_strnstr(char *src, const char *to_find, size_t n);
char	*ft_strdup(const char *str);
char	*ft_strndup(const char *src, size_t n);

int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_strequ(char const *s1, const char *s2);
int		ft_strnequ(char const *s1, const char *s2, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
size_t	ft_strlen(const char *str);

void	ft_bzero(void *str, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
void	*ft_memcpy_rev(void *str1, const void *str2, size_t n);
void	*ft_memccpy(void *str1, const void *str2, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strclr(char	*s);
void	ft_strdel(char **ap);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);

void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif