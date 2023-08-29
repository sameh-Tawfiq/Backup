#include "main.h"

/**
 * _memcpy - a function that copys memory area
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: number of bytes
 * Return: returns a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n)
	{
		*start = *src;
		src++;
		start++;
    n--;
	}
	return (dest);
}
