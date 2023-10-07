#include <stdio.h>
/**
 * main - A program that prints alphabet
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
{
	if (c != 'q' && c != 'e')
	putchar(c);
	c++;
}
	putchar('\n');
	return (0);
}
