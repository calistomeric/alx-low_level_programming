#include "main.h"

/**
 * _strspn - checks for string present in another string
 * @s: string to look from
 * @accept: search string
 * Return: 0 for success
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = 0;

	for (i = 0; accept[i] >= '\0'; i++)
	{
		for (j = 0; s[j] >= '\0'; j++)
		{
			if (accept[i] == s[j])
				len++;
			j++
		}
		i++
	}
	return (len);
}
