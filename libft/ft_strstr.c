
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		while (str[i] == to_find[j])
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
