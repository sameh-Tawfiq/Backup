#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
