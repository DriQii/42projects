
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char *dest_temp;
	const char *src_temp;

	dest_temp = dest;
	src_temp = src;
	while (len-- > 0)
		*dest_temp++ = *src_temp++;
	return (dest);
}
