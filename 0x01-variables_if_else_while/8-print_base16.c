#include <stdio.h>
/**
 * main - A program that prints hexadecimal number
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	char b;

	for (a = 0; a <= 9; a++)
		putchar(a + '0');
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
