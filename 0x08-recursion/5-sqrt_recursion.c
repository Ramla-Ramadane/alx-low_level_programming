#include "main.h"

/**
 * _sqrt_recursion_1 - function that contain the counter
 * @n: the number
 * @square: the counter
 * Return: square root
 */
int _sqrt_recursion_1(int n, int square)
{
	if ((square * square) == n)
	{
		return (square);
	}
	if ((square * square) > n)
	{
		return (-1);
	}

		return (_sqrt_recursion_1(n, square + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

		return (_sqrt_recursion_1(n, 0));
}
