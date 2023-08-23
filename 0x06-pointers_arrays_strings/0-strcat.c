#include <stdio.h>
#include "main.h"

/**
 * *_strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: Parameter1
 * @src: Parameter2
 * Return: A pointer
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp)
		temp++;

	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}
