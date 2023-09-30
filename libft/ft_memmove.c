
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
	char *destchar;
	char *srcchar;
	size_t i;

	destchar = (char *)dest;
	srcchar = (char *)src;
	if (!destchar && !srcchar)
		return (NULL);
	i = 0;
	if (destchar > srcchar)
	{
		while (len-- > 0)
		{
			destchar[len] = srcchar[len];
		}
	}
	else
	{
		while (i < len)
		{
			destchar[i] = srcchar[i];
			i++;
		}
	}
	return (dest);
}
