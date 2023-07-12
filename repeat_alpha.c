#include <unistd.h>

int	main(int ac, char **av)
{
	int i,b;
	i = 0;

	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			b = 1;
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				b = av[1][i] - 64;
			}
			
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				b = av[1][i] - 96;
			}

			while(b >= 1)
			{
				write(1, &av[1][i], 1);
				b--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
