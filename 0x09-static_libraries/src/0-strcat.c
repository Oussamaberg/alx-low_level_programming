#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * Return: dest + src.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_length;

	dest_length = strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] =  '\0';
	return (dest);
}
