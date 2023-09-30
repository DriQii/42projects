
#include <stdlib.h>

static int ft_countnb(int c)
{
	int count;
	count = 0;

	if (c < 0)
	{
		count++;
		c = c * -1;
	}
	while (c / 10 > 0)
	{
		c = c / 10;
		count++;
	}
	count++;
	return (count);
}

char *ft_intmin(void)
{
	char *s;
	int len;
	int i;
	int c;

	c = 2147483647;
	i = 1;
	len = 1000000000;
	s = (char *)malloc(sizeof(char) * 12);
	s[0] = '-';
	while (len / 10 > 0)
	{
		s[i] = c / len + '0';
		c = c % len;
		len = len / 10;
		i++;
	}
	s[i] = c / len + '1';
	s[i + 1] = '\0';
	return (s);
}
char *ft_itoa(int c)
{
	int i;
	int count;
	int len;
	char *s;

	if (c == -2147483648)
	{
		s = ft_intmin();
		return (s);
	}
	len = 1;
	i = 0;
	count = ft_countnb(c);
	s = (char *)malloc(sizeof(char) * (count + 1));
	if (!s)
		return (NULL);
	if (c < 0)
	{
		count--;
		s[i++] = '-';
		c = c * -1;
	}
	while (count-- > 1)
		len = len * 10;
	while (len / 10 > 0)
	{
		s[i] = c / len + '0';
		c = c % len;
		len = len / 10;
		i++;
	}
	s[i] = c / len + '0';
	s[i + 1] = '\0';
	return (s);
}
