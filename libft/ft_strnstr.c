
#include <string.h>

char *ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t i;
	int j;

	j = 0;
	i = 0;
	if (!to_find[i])
		return ((char *)str);
	while (str[i] && i < n)
	{
		while (str[i] == to_find[j] && i < n)
		{
			i++;
			j++;
			if (!to_find[j])
				return ((char *)&str[i - j]);
		}
		i = i - j + 1;
		j = 0;
	}
	return (NULL);
}
