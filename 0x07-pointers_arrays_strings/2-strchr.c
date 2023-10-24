#include "main.h"

/**
 * _strchr - finds occurence of a character
 * @s: string to search
 * @c: search character
 * Return: pointer to first occurence or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
