#include "main.h"

/**
* _isdigit - A function that checks for digits from 0 to 9.
* @c: An input.
* Return: 1 if c is adigit or 0 otherwise.
*/
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
