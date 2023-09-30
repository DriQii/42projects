int ft_isalpha(int c)
{
    if (c < 'A' || c > 'z' || (c < 'a'&& c > 'Z'))
        return (0);
    return (1);
}
