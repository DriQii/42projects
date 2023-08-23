void	*ft_memset(void *str, int c, int count)
{
	char *temp;

	temp = str;
	while (count > 0)
	{
		*temp++ = c;
	}
	return (str);
}

int main (void)
{
	char str[] = "Hello World";
	ft_memset(str, 'o', 3);
}
