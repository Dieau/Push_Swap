/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:00:54 by alakhdar          #+#    #+#             */
/*   Updated: 2022/01/18 15:46:02 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *str);
void		ft_bzero(void	*s, size_t n);
size_t		ft_strlcpy(char *_restrict_dst,
				const char *_restrict_src, size_t dstsize);
void		*ft_memset(void *b, int c, size_t len);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
void		*ft_memcpy(void *_restrict_dst, const void *_restrict_src,
				size_t n);
char		*ft_strdup(char	*src);
char		**ft_split(char const *s, char c);
char		*ft_strjoin(char const *s1, char const *s2);
void		*ft_memmove(void *dst, const void *src, size_t len);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
size_t		ft_strlcat(char *dest, char const *src, size_t size);
void		*ft_memchr(const void *s, int c, size_t n);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_itoa(int n);
char		*ft_strtrim(char const *s1, char const *set);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
long long	ft_atol(const char	*str);
#endif
