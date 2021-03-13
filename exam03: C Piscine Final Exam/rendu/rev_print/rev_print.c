
int ft_strlen(char *str)
{	int i = 0;
	while(str[i])
		i++;
	return (i);
}

char    *rev_print(char *str)
{
	int length;
	int i;

	length = ft_strlen(str) - 1;
	i = 0;

	while (i <= length)
		write(1, &str[length--], 1);
	return (str);
}
