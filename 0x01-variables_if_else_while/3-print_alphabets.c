#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry piont
 * generat a random int var n
 * Return: positive if the n is > 0 or negative if n < 0
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alphabet[i]);
	for (i = 0; i < 26; i++)
		putchar(toupper(alphabet[i]));
	putchar('\n');

	return (0);
}
