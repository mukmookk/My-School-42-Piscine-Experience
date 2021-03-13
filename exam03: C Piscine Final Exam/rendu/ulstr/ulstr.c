#include <unistd.h>
#include <stdbool.h>

bool is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

bool is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int main(int ac, char* av[])
{
	int i;
	
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if(is_lower(av[1][i]))
				av[1][i] -= 32;
			else if(is_upper(av[1][i]))
				av[1][i] += 32;
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}
