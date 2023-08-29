#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 * @s: location to fill
 * @b: a char to fill location with
 * @n: number of bytes to fill
 * Return: returns a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n)
	{
		*start = b;
		start++;
		n--;
	}
	return (s);
}
