#include "main.h"
#include <unistd.h>

/**
 * _putchar -  returns the output character on the screen
 * @c: accepts character as input
 * Return: 0 if success, -1 as false
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
