#include "main.h"

/**
 * is_prime_number_1 - helper function
 * @n: number
 * @divide: divisor
 * Return: 1 is prime 0 is not prime
 */
int is_prime_number_1(int n, int divide)
{
	if (n / divide == 1)
	{
		return (1);
	}
	if (n % divide == 0)
	{
		return (0);
	}

		return (is_prime_number_1(n, divide + 1));
}
/**
 * is_prime_number - function that returns 1 if the input is a prime number
 * @n: number
 * Return: 1 is prime 0 is not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

		return (is_prime_number_1(n, 2));
}
