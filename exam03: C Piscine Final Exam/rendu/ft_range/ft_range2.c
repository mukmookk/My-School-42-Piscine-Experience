#include <stdlib.h>

void ft_swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = temp;
}

int		*ft_range(int start, int end)
{
	int i;
	int diff;
	int *arr;
	bool reversed;

	if ((reversed = (start > end)))
		ft_swap_int(&start, &end);
	diff = end - start + 1;
	if (!(arr = malloc(sizeof(int)*diff)))
		return (NULL);
	i = 0;
	while (i < diff)
	{
		arr[reversed ? diff - 1 - i : i] = start + i;
		i++;
	}
	return (arr);
}
