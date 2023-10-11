#include "main.h"
/**
 * _islower - checks whether an integer is uppercase or not
 * @c: The function accepts integer values as input
 * Return: 0 if uppercase else 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
