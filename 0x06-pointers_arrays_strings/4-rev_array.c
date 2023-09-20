#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: parameter checked
 * @n: parameter checked
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int f;
	int l = 0;

	for (f = n - 1; f >= 0; f--)
	{
		int r = f;

		while (l < r)
		{
			int n = a[r];

			a[r] = a[l];
			a[l] = n;
			l++;
			r--;
		}
	}
}
