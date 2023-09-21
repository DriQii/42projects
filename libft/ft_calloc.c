#include <string.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    char *temp;
    int i;

    i = 0;
    temp = (char *)malloc(count * size);
    while (count-- > 0)
    {
        temp[i] = 0;
        i++;
    }
    return ((void *)temp);
}
