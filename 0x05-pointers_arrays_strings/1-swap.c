#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: stores address of the first integer
 * @b: stores the address of the second integer
 * Return: 0 success
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
