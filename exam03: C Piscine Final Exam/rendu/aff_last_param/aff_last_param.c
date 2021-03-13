#include <unistd.h>

int main(int ac, char *av[])
{
	int i;
	char *lw;
	
	char c_ac;

	c_ac = 48 + ac;
	write(1, &c_ac, 1);
	i = 0;
	if (ac > 1)
	{
		while(av[ac-1][i])
			write(1, &av[ac-1][i++], 1);
	}
	write(1, "\n", 1);
}
