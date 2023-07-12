#include <unistd.h>

int	main(int ac, char **av)
{
	int a;
	a = 0;
	int b;

	if(ac == 2)
	{
		while(av[1][a] != '\0')
		{
			b = 1;
			if(av[1][a] >= 'A' && av[1][a] <= 'Z')
			{
				b = av[1][a] -64;
			}
			if(av[1][a] >= 'a' && av[1][a] <= 'z')
			{
				b = av[1][a] -96;
			}
			while(b >= 1)
			{
				write(1, &av[1][a], 1);
				b--;
			}
			a++;
		}
	}
	write(1, "\n", 1);
}
