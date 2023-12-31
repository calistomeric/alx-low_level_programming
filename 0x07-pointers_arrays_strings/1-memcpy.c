#include "main.h"

/**
 * *_memcpy - copies n bytes of data
 * @dest: memory area where item is copied to
 * @src: memory area where item is copied from
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int n_ = n;

	for (i = 0; i < n_; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
