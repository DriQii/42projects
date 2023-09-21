#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int ft_isalnum(char c);
int ft_isalpha(char c);
int ft_isdigit(char nb);
char *ft_strcat(char *dest, char *src);
int ft_strcmp(char *s1, char *s2);
char *ft_strcpy(char *dest, char *src);
size_t ft_strlcat(char *dest, const char *src, size_t size);
int ft_strlen(char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strncpy(char *dest, char *src, int n);
void	ft_bzero(void *str, int len);
void	*ft_memset(void *str, int c, int count);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void *ft_memccpy(void *dest, void *src, int c, int len);
void *ft_memmove(void *dest, const void *src, size_t len);
int ft_isascii(int c);
int ft_isprint(int c);
void *ft_memchr(const void *memblock, int c, size_t size);
int ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
char *ft_strnstr(const char *str, const char *to_find, size_t n);
int ft_atoi(const char *str);
char *ft_strstr(char *str, char *to_find);
void ft_putnbr(int n);

#endif
