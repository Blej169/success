#include <unistd.h>
#include <stdlib.h>


void    ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n/10);
	char    digit = n%10 + '0';
	write(1, &digit,1);
}

void factorize(int number) {
	int i = 2;

	while (number > 1) {
		if (number % i == 0) {
			ft_putnbr(i);
			number /= i;
			if (number > 1)
				write(1,"*",1);
		} else
			i++;
	}
}

int main(int argc, char *argv[]) {
	int number;
	if (argc == 2) {
		number = atoi(argv[1]);
		if (number > 0)
			factorize(number);
	}
	write(1,"\n",1);
	return (0);
}
