#include "main.h"

/**
 * print_rev - A function that reverse a string
 * @s: A pointer to string
 * Return: Null
 */

void print_rev(char *s)
{
	char *str = s;
	int index = -1;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	while (index >= 0)
	{
		_putchar(*(str + index));
		index--;
	}
	_putchar('\n');
}
