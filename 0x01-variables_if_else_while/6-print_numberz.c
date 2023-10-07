#include <stdio.h>
/**
 * main - A program to print numbers
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('/n');
	return (0);
}
