
#include <string.h>

void *ft_memchr(void *memblock, int c, int size)
{
	int i;
	char *str;

	i = 0;
	str = memblock;
	while (i < size)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
