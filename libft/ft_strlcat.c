
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t src_len;

    src_len =  (size_t)ft_strlen((char *)src);
    j = 0;
    i = 0;
    while (dest[i] && size > i)
        i++;
    if (size <= i)
        return (src_len + size);
    while (src[j] && i  + j < size - 1)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (i + src_len);
}/*
void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}
int main(void)
{
    char *dest;

    dest = (char *)malloc(sizeof(*dest) * 15);
    memset(dest, 0, 15);
	memset(dest, 'r', 6);
    dest[11] = 'a';
	ft_print_result(ft_strlcat(dest, "lorem", 15));
	write(1, "\n", 1);
	write(1, dest, 15);
}

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
*/
