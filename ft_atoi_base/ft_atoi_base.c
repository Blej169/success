static int		get_char_value(char c)
{
	const char		*base = "0123456789abcdef";
	int				i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_tolower(int c)
{
	if (c >= 'A' && 'Z' >= c)
		return (c + 32);
	return (c);
}

int			ft_atoi_base(const char *str, unsigned int base)
{
	int	result;
	int		i;
	int		tmp;
    int sign = 1;

	i = 0;
	result = 0;
	if (str == 0 || base > 16)
		return (0);
	while (str[i] == '\t' || str[i] == ' ')
        i++;    
    if (str[i] == '-' || str[i]== '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
	while ((tmp = get_char_value(ft_tolower(str[i]))) != -1)
	{
		result = result * base + tmp;
		++i;
	}
	return (result*sign);
}