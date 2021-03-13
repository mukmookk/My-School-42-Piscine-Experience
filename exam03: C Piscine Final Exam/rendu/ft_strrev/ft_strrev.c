#include <unistd.h>

void ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

char	*ft_strrev(char *str)
{	
	int length;
	int i;

	i = 0;
	length = 0;
	while (str[length])
		length++;
	while (i < length/2)
	{
		ft_swap(&str[i], &str[length - 1 - i]);
		i++;
	}
	return (str);
}
