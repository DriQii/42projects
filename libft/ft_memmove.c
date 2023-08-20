
#include "header.h"

void *ft_memmove(void *dest, void *src, int len)
{
	char *destchar;
	char *srcchar;
	char *tempsrc;
	int i;


	i = 0;
	tempsrc = (char *)malloc(len * sizeof(char));
	destchar = dest;
	srcchar = src;

	while (i < len)
		tempsrc[i++] = *srcchar++;
	i = 0;
	while (i < len)
		*destchar++ = tempsrc[i++];
	return (dest);
}
