#include <unistd.h>

int	astrlen(char *str)
{
	int a;
	a = 0;
	while(str[a] != '\0')
	{
		a++;
	}
	return(a);
}

int main(int ac, char **av)
{
	int b;

	if(ac == 2)
	{
		b = astrlen(av[1])-1;
		while(av[1][b] != '\0')
		{
			write(1, &av[1][b], 1);
			b--;
		}
	}
	write(1, "\n", 1);
}
