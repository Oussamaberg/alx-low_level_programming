#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * *str_concat - concatenates two strings.
 * @s1 : string1
 * @s2 : string2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int size1;
	int size2;
	int i;

	if (s1 == NULL)
		size1 = 0;
	else
		size1 = strlen(s1);
	if (s2 == NULL)
		size2 = 0;
	else
		size2 = strlen(s2);
	s = malloc((size1 + size2) * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (size1 + size2); i++)
	{
		if (i < size1)
			s[i] = s1[i];
		else
			s[i] = s2[i - size1];
	}
	s[i] = '\0';
	return (s);

}
