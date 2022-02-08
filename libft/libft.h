#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//typedef	unsigned	int	size_t;
int		ft_atoi(const	char *str);
void	*ft_bzero(void *s, size_t n);
int		ft_isalnum(int	c);
int		ft_isdigit(int c);
int		ft_isalpha(int	c);
int		ft_isascii(int	c);
int		ft_isalpha(int	c);
int		ft_isprint(int	c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const	void *s1, const void *s2, size_t n);
int		ft_tolower(int	c);
int		ft_toupper(int	c);
void	*ft_memcpy(void	*dst,const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void	*b,int c, size_t len);
void	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s,int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlcpy(char	*dest, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
#endif
