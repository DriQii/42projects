#include <string.h>
#include <stdlib.h>

static void	ft_bzero(void *str, int len)
{
	char *temp;

	temp = str;
	while(len-- > 0)
		*temp++ = '\0';
}

void *ft_calloc(size_t count, size_t size)
{
    void *temp;

    temp = malloc(count * size);
    if (!temp)
        return (NULL);
    ft_bzero(temp, count * size);
    return ((void *)temp);
}
