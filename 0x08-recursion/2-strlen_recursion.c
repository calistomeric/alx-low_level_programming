#include "main.h"

/**
 * _strlen_recursion - recursion for string len
 * @s: string input
 * Return: 0 for success
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
