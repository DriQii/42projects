
#include "libft.h"

int ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	size_t i;
	const char *str1;
	const char *str2;

	i = 0;
	str1 = pointer1;
	str2 = pointer2;
	while (i < size)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
