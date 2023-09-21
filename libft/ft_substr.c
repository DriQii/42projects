
#include <string.h>
#include <stdlib.h>

static int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;
	int l;
	char *substr;

	if (start > (unsigned int)ft_strlen((char *)s))
		{
			substr = (char *)malloc(sizeof(char));
			substr[0] = '\0';
			return (substr);
		}
	if ((ft_strlen((char *)s) - start) > len)
		l = len;
	else
		l = ft_strlen((char *)s) - start;
	i = 0;
	substr = (char *)malloc(sizeof(char) * (l + 1));
	if (!substr)
		return (NULL);
	while (len-- > 0 && s[start])
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
