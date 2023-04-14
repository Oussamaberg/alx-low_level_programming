#include "main.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string.
 * @s2: string;
 * @n: int;
 * Return: Output.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	size = strlen(s1) + n + 1;
	p = malloc(size);
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < size; i++)
	{
		p[i] = s1[i];
		if (i >= strlen(s1))
			p[i] = s2[i - strlen(s1)];

	}
	p[i] = '\0';
	return (p);
}
