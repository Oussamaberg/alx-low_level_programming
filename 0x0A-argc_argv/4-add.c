#include<stdio.h>
#include<stdlib.h>
/**
 * isnumber - return 0 if s contains a charactere else than numbers.
 * @s: a string.
 * Return:  0 if error
 * 1 on success.
 */
int isnumber(char *s)
{
	int i = 0;
	int flag = 1;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			flag = 0;
			break;
		}
		i++;
	}
	return (flag);
}

/**
 * main - adds positive numbers.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return:  0 on success
 * 1 on Error.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isnumber(argv[i]) != 0)
				sum = sum + atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);

}
