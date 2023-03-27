#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: The string to reverse.
 * Return: void.
 */
void rev_string(char *s)
{
	char c;
	int j = 0;

	int i = strlen(s) - 1;

	for (; i >= strlen(s) / 2; i--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j++;
	}
}
