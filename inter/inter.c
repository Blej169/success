#include<unistd.h>

int	check(int c, char *str, int len){
	int i;

	i = 0;
	while(i < len)
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return 1;
}

int main(int ac, char **av)
{
	int i;
	int j;

	if(ac == 3)
	{
		i = 0;
		while(av[1][i])
		{
			j = 0;
			while(av[2][j])
			{
				if(av[1][i] == av[2][j])
				{
					if(check(av[1][i], av[1], i)){
						write(1, &av[1][i], 1);
						break;
					}
				
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
