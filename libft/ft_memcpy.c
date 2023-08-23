void	*ft_memcpy(void *dest, void *src, int len)
{
	char *dest_temp;
	char *src_temp;

	dest_temp = dest;
	src_temp = src;
	while (len-- > 0)
		*dest_temp++ = *src_temp++;
	return (dest);
}
