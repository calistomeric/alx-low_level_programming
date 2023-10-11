#include "main.h"

/**
 * print_last_digit - A program to print the last digit f a number
 * @x: accepts the parameter as integer
 * Return: 0
 */

int print_last_digit(int x)
{
	if (x >= 0)
	{
		_putchar(x % 10 + '0');
		return (x % 10);
	}
	else
	{
		_putchar((-1 * x) % 10 + '0');
		return ((-1 * x) % 10);
	}
}
