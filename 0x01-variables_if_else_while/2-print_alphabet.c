#include <stdio.h>
/*
 * main - A program to print all the alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	char alph;
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	return (0);
}
