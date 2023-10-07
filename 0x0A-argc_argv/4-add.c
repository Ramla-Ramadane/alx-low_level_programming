#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 success 1 error
 */
int main(int argc, char *argv[])
{
	int sum = 0, c, b;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (c = 1; c < argc; c++)
	{
		for (b = 0; argv[c][b] != '\0'; b++)
		{
			if (!isdigit(argv[c][b]))
			{
				printf("Error\n");
				return (1);
			}

		}

		sum += atoi(argv[c]);
	}

		printf("%d\n", sum);
		return (0);
}


