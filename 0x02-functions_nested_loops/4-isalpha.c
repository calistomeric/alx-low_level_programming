#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: accepts the parameter passed as int
 * Return: 1 if its alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
