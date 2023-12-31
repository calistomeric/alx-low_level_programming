#include "main.h"

/**
 * print_rev -  print reverse string
 * @s: character input
 * Return: 0 for success
 */

void print_rev(char *s)
{
	int first_cnt = 0;
	int sec_cnt;

	while (*s != '\0')
	{
		first_cnt++;
		s++;
	}
	s--;
	for (sec_cnt = first_cnt; sec_cnt > 0; sec_cnt--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
