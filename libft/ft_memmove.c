
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
	char *destchar;
	char *srcchar;
	char tempsrc[4096];
	size_t i;

	destchar = (char *)dest;
	srcchar = (char *)src;
	i = 0;
	while (i < len)
	{
		tempsrc[i] = srcchar[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		destchar[i] = tempsrc[i];
		i++;
	}
	return (dest);
}
