#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: number of characters to add from src.
 * Return: dest + n src.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_length;

	dest_length = strlen(dest);
	while (i < strlen(src) && i < n)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] =  '\0';
	return (dest);
}
