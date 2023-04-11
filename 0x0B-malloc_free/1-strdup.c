#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str : string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *s;
	int n;
	int i;

	if (str == NULL)
		return (NULL);
	n = strlen(str);
	s = malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		s[i] = str[i];
	return (s);

}
