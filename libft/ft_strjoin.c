
#include <stdlib.h>

static int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

static char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	str = (char *)malloc(sizeof(char) *(ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1));
	ft_strcpy((char *)str, (char *)s1);
	ft_strcpy((char *)str + ft_strlen((char *) s1), (char *)s2);
	return (str);
}

