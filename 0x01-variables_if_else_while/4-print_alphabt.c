#include <stdio.h>
/**
 * main - Entry point
 * Code prints the alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
