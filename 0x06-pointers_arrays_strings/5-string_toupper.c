#include "mainn.h"

/**
 * string_toupper - a function that changes all lowercase letters of a  string
 * to upper case
 * @s: an input string
 * Return: a pointer
 */
char *string_toupper(char *s)
{
	char *aux = s;

	while (*aux != '\0')
	{
		if (*aux >= 'a' && *aux <= 'z')
			*aux -= 32;
		aux++;
	}
	return (s);
}
