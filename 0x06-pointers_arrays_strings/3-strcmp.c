#include <stdio.h>
#include "main.h"

/**
 * *_strcmp - A function that compares two strings
 * @s1: Parameter1
 * @s2: Parameter2
 * Return: n integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
