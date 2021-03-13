#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void ft_swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int     *ft_range(int start, int end)
{
	int	i;
	int diff;
	int *arr;
	bool reversed;

	if ((reversed = (start > end)))
		ft_swap_int(&start, &end);
	diff = end - start + 1;
	if(!(arr = malloc(sizeof(int) * diff)))
		return (NULL);
	i = 0;
	while (i < diff)
	{
		arr [reversed ? diff - 1 - i : i] = start + i;
		i++;
	}
	return (arr);

}

int main()
{
	int min = 5;
	int max = 4;
	int* arr = ft_range(-3, 0);

	for (int i = 0; i <= 10; i++)
		printf("%d",arr[i]);
}	
