#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: result
 */
int main(int argc, char *argv[])
{
	long mul = 1;
	long *p;
	int c, d, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	p = malloc((argc - 1) * sizeof(long));

	if (p == NULL)
	{
		return (1);
	}

	for (c = 1; c < argc; c++)
	{
		for (b = 0; argv[c][b] != '\0'; b++)
		{
			if (!isdigit(argv[c][b]))
			{
				printf("Error\n");
				free(p);
				exit(98);
			}
		}
		p[c - 1] = strtol(argv[c], NULL, 10);
	}
	for (d = 0; d < argc - 1; d++)
	{
		mul = mul * p[d];
	}

		printf("%ld\n", mul);
		free(p);
		return (0);
}
