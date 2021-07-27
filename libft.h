#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h> // TO RM

typedef unsigned int size_t;
//Part 1
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int 	ft_isalnum(int c);
int 	ft_isascii(int c);
int 	ft_isprint(int c);
size_t	ft_strlen(const char *str);
void 	*ft_memset (void *tab, int c, size_t n);
void 	ft_bzero(void *tab, size_t n);
void 	*ft_memcpy(void *dst, const void *src, size_t n);
void 	*ft_memmove(void *dst, const void *src, size_t n);
size_t 	ft_strlcpy(char *dst, const char *src, size_t size); 
size_t 	ft_strlcat(char *dst, const char *src, size_t size); 
int 	ft_toupper(int c);
int 	ft_tolower (int c);
char 	*ft_strchr(const char *str, int c);
char 	*ft_strrchr(const char *str, int c);
int 	ft_strncmp(const char *s1, const char *s2, size_t n);
void 	*ft_memchr(const void *str, int c, size_t n);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
char 	*ft_strnstr(const char *str, const char *tofind, size_t n);
int 	ft_atoi(const char *str);
void 	*ft_calloc(size_t count, size_t size);
char 	*ft_strdup(const char *str);
//Part 2
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
#endif
