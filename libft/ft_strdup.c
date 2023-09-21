
#include <stdlib.h>
#include <string.h>

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

char *ft_strdup(const char *src)
{
	char *dest;
	int i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen((char *)src) + 1));
	if (!dest)
		return (NULL);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
