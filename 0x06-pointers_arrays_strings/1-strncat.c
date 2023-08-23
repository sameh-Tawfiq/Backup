#include <stdio.h>
#include "main.h"

/**
 * *_strncat - A function that concatenates two strings.
 * @dest: Parameter1
 * @src: Parameter2
 * @n: Parameter3
 * Return: A pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp1 = dest;
	char *temp2 = src;

	while (*temp1)
		temp1++;

	while ((n > 0) & (*temp2 != '\0'))
	{
		*temp1 = *temp2;
		temp1++;
		temp2++;
		n--;
	}
	return (dest);
}
