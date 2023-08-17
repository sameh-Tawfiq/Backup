#include "main.h"

/**
 * prints 10 times the numbers, from 0 to 14, followed by a new line.
 * followed by a new line.
 * Return: None
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '14'; j++)
			_putchar(j);
		_putchar('\n');
	}
	_putchar('\n');
}
