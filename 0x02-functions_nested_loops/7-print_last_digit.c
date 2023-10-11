#include "main.h"

/**
 * print_last_digit - A program to print the last digit f a number
 * @x: accepts the parameter as integer
 * Return: 0
 */

int print_last_digit(int x)
{
	int a;

	if (x < 0)
	{
		x = -x;
	}
	a = x % 10;
	_putchar(a + '0');
	return (a);
}
