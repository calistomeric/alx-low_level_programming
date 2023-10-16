#include "main.h"

/**
 * _puts - puts a character on the screen
 * @str: input string
 * Return: 0 for success
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
