#include<stdlib.h>
#include<stdio.h>

/**
 * create_array-creates an array of chars,
 * and initializes it with a specific char.
 * @size : size
 * @c : char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	for (i = 0; i <= size; i++)
		s[i] = c;
	return (s);

}
