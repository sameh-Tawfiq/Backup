#include <stdio.h>
#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: Parameter1
 * @n: Parameter2
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int *first = a;
	int *last = (a + n) - 1;

	if (n % 2 == 0)
	{
		while (first < last)
		{
			int temp;

			temp = *first;
			*first = *last;
			*last = temp;
			first++;
			last--;
		}
	}
	else
	{
		while (first < last)
		{
			int temp;

			temp = *first;
			*first = *last;
			*last = temp;
			first++;
			last--;
		}
	}
}
