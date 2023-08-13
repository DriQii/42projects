
#include "header.h"

int ft_strlcat(char *dest, char *src, int size)
{
    int i;
    int j;
    int dest_len;
    int src_len;

    dest_len = ft_strlen(dest);
    src_len =  ft_strlen(src);
    j = 0;
    i = 0;
    if (size - 1 <= dest_len)
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