#include<stdio.h>
/**
 * main - print the program name.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
