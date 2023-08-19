void	ft_bzero(void *str, int len)
{
	char *temp;

	temp = str;
	while(len-- > 0)
		*temp++ = '\0';
}
