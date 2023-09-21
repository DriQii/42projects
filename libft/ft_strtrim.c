
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
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

static int ft_setverif(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int i;
	int j;
	int k;

	k = 0;
	j = ft_strlen((char *) s1);
	i = 0;
	while (s1[i] && ft_setverif(s1[i], set))
		i++;
	while (s1[j - 1] && ft_setverif(s1[j - 1], set))
		j--;
	if (i >= j)
	{
		str = (char *)malloc(sizeof(char));
		str[0] = '\0';
		return(str);
	}
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}/*
int main(void)
{
	//char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	printf("%s",ft_strtrim("abcdba", "acb"));
}*/
