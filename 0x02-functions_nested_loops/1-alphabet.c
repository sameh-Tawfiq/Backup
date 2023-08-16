#include "main.h"

/**
 * main - Check description.
 * Description: It prints the word _putchar, followed by a new line.
 * Return: 0.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

