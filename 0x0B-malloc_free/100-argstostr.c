#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac : parametres count.
 * @av : parametre vector.
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int total_size = 0;
	int n, index;
	int i, j;

	if (av == NULL || ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		total_size = total_size + strlen(av[i]) + 1;
	}
	s = malloc((total_size + 1) * sizeof(char));
	j = 0;
	n = strlen(av[0]) - 1;
	for (i = 0; i <= total_size; i++)
	{
		if (i > n)
		{
			if (j == ac - 1)
				break;
			j++;
			n = n + strlen(av[j]) + 1;
			s[i] = '\n';
			i++;
			index = i;
		}
		if (j == 0)
			s[i] = av[j][i];
		else
			s[i] = av[j][i - index];
	}
	s[i] = '\n';
	return (s);

}
