#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of the array
 * @c: char to assign
 * Return: 0 if success
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	size = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
