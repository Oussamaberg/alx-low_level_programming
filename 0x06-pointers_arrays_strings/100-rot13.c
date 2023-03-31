#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string into rot13.
 * @s: string.
 * Return: s.
 */
char *rot13(char *s)
{
	int i = 0;
	int j;
	char arr1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmM";
	char arr2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZ";
	char arr[26];

	strcpy(arr, arr1);
	strcat(arr1, arr2);
	strcat(arr2, arr);
	while (s[i] != '\0')
	{
		j = 0;
		for (; j < 52; j++)
		{
			if (s[i] == arr1[j])
			{
				s[i] = arr2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
