#include <stdlib.h>
#include <stdbool.h>
bool is_space(char c)
{
	return (c == ' ' || c == '\t');
}

bool is_operator(char c)
{
	return (c == '+' || c == '-');
}

int ft_atoi(const char *str)
{
	int i;
	int minus;
	int result;

	i = 0;
	minus = 1;
	while(is_space(str[i]))
		i++;
	while (is_operator(str[i]))
	{
		if(str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i])
	{
		result *= 10;
		result += (str[i] - 48);
		i++;
	}
	return (minus * result);
}
#include <unistd.h>
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi("     ---+--1234"));
}
