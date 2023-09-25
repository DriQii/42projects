
#include <stdlib.h>
#include <string.h>


static int ft_countwords(char const *s, char c)
{
	int words;
	int i;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			words++;
		i++;
	}
	return (words);
}

static char **ft_mallocwords(char **tab, const char *s, char c)
{
    int i;
	int j;
	int k;

	k = 0;
	j = 1;
    i = 0;
    while (s[i])
    {
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
		{
			tab[k] = (char *)malloc(sizeof(char) * (j + 1));
			if (!tab[k])
				return (NULL);
			k++;
			j = 0;
		}
		if (s[i] != c && s[i] != c)
			j++;
        i++;
    }
	return (tab);
}


char **ft_split(char const *s, char c)
{
	char **tab;
	int countwords;
	int i;
	int j;
	int k;

	j = 0;
	k = 0;
	i = 0;
	countwords = ft_countwords(s , c);
	tab = (char **)malloc(sizeof(char *) * (countwords + 1));
	if (!tab || !ft_mallocwords(tab, s, c))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
		{
			tab[k][j] = s[i];
			tab[k][j + 1] = '\0';
			k++;
			j = 0;
			i++;
		}
		else if (s[i] == c)
			i++;
		else
			tab[k][j++] = s[i++];

	}
	tab[k] = NULL;
	return (tab);
}
