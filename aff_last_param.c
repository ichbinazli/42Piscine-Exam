#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	a = 0;

	while(argv[argc-1][a] != '\0' && argc > 1)
	{
		write(1, &argv[argc-1][a], 1);
		a++;
	}
	write(1, "\n", 1);
	return 0;
}
