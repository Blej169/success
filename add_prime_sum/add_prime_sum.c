#include <unistd.h>

int ft_atoi(char *s)
{
	int i;
	int r;
	int sign;

	i = 0;
	sign = 1;
	r = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	if(s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] <= '9' && s[i] >= '0')
	{
		r = r * 10 + s[i] - '0';
		i++;
	}
	return (sign * r);
}

void    ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n/10);
	char    digit = n%10 + '0';
	write(1, &digit,1);
}

int is_prime(int a)
{
	int i;
	
	if (a <= 1)
		return (0);
	i = 2;
	while (i*i <= a)
	{
		if (a % i == 0)
			return(0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int sum = 0;
	int nbr;

	if (ac == 2 && av[1] != NULL)
	{
		nbr = ft_atoi(av[1]);
		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}