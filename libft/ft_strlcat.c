
#include <string.h>
#include <stdio.h>
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

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dest_len;
    size_t src_len;

    dest_len = (size_t)ft_strlen(dest);
    src_len =  (size_t)ft_strlen((char *)src);
    j = 0;
    i = 0;
    if (size <= dest_len)
        return (src_len + size);
    while (dest[i])
        i++;
    while (src[j] && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest_len + src_len);
}
