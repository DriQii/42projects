
#include <string.h>

void *ft_memchr(const void *memblock, int c, size_t size)
{
	size_t i;
	const char *str;

	i = 0;
	str = memblock;
	while (i < size)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
