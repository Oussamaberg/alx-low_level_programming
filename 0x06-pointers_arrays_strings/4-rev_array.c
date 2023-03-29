#include <string.h>
#include "main.h"
/**
 * reverse_array - reverses a string.
 * @a: The array to reverse.
 * @n: sive of the array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int c;
	int j = 0;

	int i = n - 1;

	for (; i >= n / 2; i--)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
		j++;
	}
}
