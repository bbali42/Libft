#ifndef LIBFT_H
# define LIBFT_H
int	ft_isalpha(int c);
int	isdigit(int c);
int isalnum(int c);
int isascii(int c);
int isprint(int c);
size_t strlen(const char *str);
void *memset (void *tab, int c, size_t n);
void bzero(void *tab, size_t n);
void *memcpy(void *dst, const void *src, size_t n);
void *memmove(void *dst, const void *src, size_t n);
size_t strlcpy(char *dst, const char *src, size_t size); 
size_t strlcat(char *dst, const char *src, size_t size); 
int toupper(int c);
int tolower (int c);
char *strchr(const char *str, int c);
char *strrchr(const char *str, int c);
int strncmp(const char *s1, const char *s2, size_t n);
void *memchr(const void *str, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
char *strnstr(const char *str, const char *tofind, size_t n);
int atoi(const char *str);
void *calloc(size_t nmemb, size_t size);
char *strdup(const char *str);
#endif
