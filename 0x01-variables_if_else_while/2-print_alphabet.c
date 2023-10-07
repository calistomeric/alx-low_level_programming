#include <stdio.h>
/*
 * main - A program to print all the alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	char alph;
	alph = 'a';
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar("/n");
	return (0);
}
