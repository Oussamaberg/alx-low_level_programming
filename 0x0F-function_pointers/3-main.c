#include<stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - mul args.
 * @argc: number of args.
 * @argv: array of args.
 * Return: int
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}
	printf("%d\n", op(a, b));
	return (0);
}
