#include <stdio.h>

/**
 * main - Entry point
 * sizeof operator
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char is: %lu bytes\n", sizeof(char));
	printf("size of int is: %lu bytes\n", sizeof(int));
	printf("size of long int is: %lu bytes\n", sizeof(long int));
	printf("size of long long int is: %lu bytes\n", sizeof(long long));
	printf("size of float is: %lu bytes\n", sizeof(float));

	return (0);
}
