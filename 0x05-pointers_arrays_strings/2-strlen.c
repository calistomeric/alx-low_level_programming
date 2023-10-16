#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: character input
 * Return: 0 for success
 */

int _strlen(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		*s++;
		num++;
	}
	return (num);
}
