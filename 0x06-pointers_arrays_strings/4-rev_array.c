#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: parameter checked
 * @n: parameter checked
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int r = n - 1;
	int l = 0;

		while (l < n / 2)
		{
			int n = a[r];

			a[r] = a[l];
			a[l] = n;
			l++;
			r--;
		}
}
