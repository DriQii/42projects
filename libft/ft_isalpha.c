int ft_isalpha(char c)
{
    if ((c < 'A' || c > 'z' || (c < 'a' && c > 'z'))
        && c < '0' || c > '9')
        return (0);
    return (1);
}
