#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the minimum number of coins,
 * to make change for an amount of money.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int coin[5] = {25, 10, 5, 2, 1};
	int cents;
	int i = 0;
	int coin_number = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		while (cents > 0)
		{
			if (cents >= coin[i])
			{
				cents = cents - coin[i];
				 coin_number++;
			}
			else
				i++;
		}
	printf("%d\n",  coin_number);
	}
	return (0);
}
