#ifndef HEADER_H
# define HEADER_H

#include <stdio.h>

int ft_isalnum(char c);
int ft_isalpha(char c);
int ft_isdigit(char nb);
char *ft_strcat(char *dest, char *src);
int ft_strcmp(char *s1, char *s2);
char *ft_strcpy(char *dest, char *src);
int ft_strlcat(char *dest, char *src, int size);
int ft_strlen(char *str);
int ft_strncmp(char *s1, char *s2, int n);
char *ft_strncpy(char *dest, char *src, int n);

#endif