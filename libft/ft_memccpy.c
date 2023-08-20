void *ft_memccpy(void *dest, void *src, int c, int len)
{
	char *tempd;
	char *temps;

	tempd = dest;
	temps = src;

	while(len-- > 0)
	{
		*tempd = *temps;
		if (*tempd == c)
			return (tempd + 1);
		tempd++;
		temps++;
	}
	return (0);
}
