
#include "libft.h"

char *ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t i;
	int j;

	j = 0;
	i = 0;
	if (!to_find[i])
		return (str);
	while (str[i] && i < n)
	{
		while (str[i] == to_find[j] && i < n)
		{
			i++;
			j++;
			if (!to_find[j])
				return (&str[i - j]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
