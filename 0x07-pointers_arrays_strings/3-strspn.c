#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: string.
 * Return: n.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int n = 0;
	int s_len = strlen(s);
	int accept_len = strlen(accept);

	for (; i < accept_len; i++)
	{
		j = 0;
		for (; j < s_len; j++)
		{
			if (s[j] == ' ')
			{
			break;
			}
			if (accept[i] == s[j])
				n++;
		}
	}
	return (n);
}
