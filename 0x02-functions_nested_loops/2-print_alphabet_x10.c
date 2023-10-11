#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case 10 times
 *
 * Return: Returns void
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j < 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
