#include "main.h"
/**
 * _islower - checks whether an integer is uppercase or not
 * @c: The function accepts integer values as input
 * Return: 0 if uppercase else 1
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);

}
