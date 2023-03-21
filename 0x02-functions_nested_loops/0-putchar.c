#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	char *String = "_putchar";

	while (String[i] != '\0')
	{
		_putchar(String[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
