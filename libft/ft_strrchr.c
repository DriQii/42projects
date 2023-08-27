#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	while (i + 1 > 0)
	{
		if (str[i] == c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}
