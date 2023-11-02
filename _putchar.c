#include "main.h"

/**
 * _putchar - prints character on the screen
 * @c: input character
 * Return: 0 for success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
