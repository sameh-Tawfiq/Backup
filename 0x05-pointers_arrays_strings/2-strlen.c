#include <stdio.h>
#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: A pointer to string
 * Return: Null
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
