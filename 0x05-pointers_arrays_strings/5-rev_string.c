#include "main.h"

/**
 * rev_string - A function that reverse a string
 * @s: A pointer to string
 * Return: Null
 */

void rev_string(char *s)
{
	int i = 0;
	int index = -1;
	char temp;
	char *str = s;

	while (*str != '\0')
	{
		index++;
		str++;
	}
	while (i < index)
	{
		temp = s[i];
		s[i] = s[index];
		s[index] = temp;
		i++;
		index--;
	}
}
