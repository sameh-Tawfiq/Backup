#include "main.h"

/**
 * print_triangle - a function that prints a triangle,
 * followed by a new line.
 * @size : An input integer
 * Return: None
 */
void print_triangle(int size)
{
	if (size == 0)
	{
		_putchar('\n');
		_putchar('\n');
	}
	else if (size == 1)
	{
		_putchar('#');
	}
	else
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int spaces = size - i;
			int j;

			for (j = 1; j <= spaces; j++)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
