
char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return s1;
}
#include <stdio.h>
int main() 
{
	char s1[100] = "abc ";
	char s2[100] = "def";

	printf("%s", ft_strcpy(s1, s2));
}

