
#include <unistd.h>
#include <stdbool.h>

bool is_valid(char c, bool board[])
{
	if (board[c] == 1)
		return false;
	return true;
}

int main(int ac, char* av[])
{
	int i;
	bool board[128] = {false, };

	i =0;
	if (ac  == 3)
	{	
		while (av[1][i])
		{		
			if (is_valid(av[1][i], board))
			{
				write(1, &av[1][i], 1);
				board[av[1][i]] = true;
			}
			i++;
		}
		i =0;
		while (av[2][i])
		{
			if(is_valid(av[2][i], board))
			{
				write(1, &av[2][i], 1);
				board[av[2][i]] = true;
			}
			i++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}
