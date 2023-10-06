#include <stdio.h>
/**
 * main - The main prints the size of various c variables
 * Return: 0 (Success) 
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
printf("Size of a char is %d bytes(s)\n", sizeof(a));
printf("Size of an int is %d bytes(s)\n", sizeof(b));
printf("Size of a long int is %d bytes(s)\n", sizeof(c));
printf("Size of a long long int is %d bytes(s)\n", sizeof(d));
printf("Size of a float is %d byte(s)\n", sizeof(6));
return (0);
}
