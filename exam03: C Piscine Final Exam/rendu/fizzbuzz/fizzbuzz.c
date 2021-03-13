#include <unistd.h>

int main()
{
	int i;
	char ten_itoc;
	char one_itoc;

	i = 1;
	while (i <= 100)
	{	
		ten_itoc = 48 + i/10;
		one_itoc = 48 + i%10;
		if ( i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n",5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else 
		{
			if (i >= 10)
				write(1,&ten_itoc, 1);
			write(1, &one_itoc, 1);
			write(1, "\n", 1);
		}
		i++;
	}
}
