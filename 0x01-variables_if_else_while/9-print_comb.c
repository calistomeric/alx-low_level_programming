#include <stdio.h>
/**
 * main - A program that prints possible combination of single numbers in ascending order
 * Return: 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		putchar(c + '0');
		putchar(',');
		putchar(' ');
	putchar('\n');
	return (0);
}
