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
	int c, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	p = malloc((argc - 1) * sizeof(long));

	for (c = 1; c < argc; c++)
	{
		for (b = 0; argv[c][b] != '\0'; b++)
		{
			if (!isdigit(argv[c][b]))
			{
				printf("Error\n");
				exit(98);
			}
		}
		p[c - 1] = strtol(argv[c], NULL, 10);

		mul = mul * strtol(argv[c], NULL, 10);
	}

		printf("%ld\n", mul);
		free(p);
		return (0);
}
