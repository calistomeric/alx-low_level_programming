#include "main.h"

/**
 * _putchar - writes to the command line
 * @a: accepts char as input
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
