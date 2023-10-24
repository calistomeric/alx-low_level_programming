#include "main.h"

/**
 * _putchar - prints output on the terminal
 * @a: input character
 * Return: returns output
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
