#include "main.h"

/**
 * print_sign - prints symbol based on particular condition
 * @n: accepts integer values
 * Return: returns 1, 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
