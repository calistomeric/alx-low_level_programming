#include <stdio.h>
/**
 * main - A program to print alphabets in small letters reveresed
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
