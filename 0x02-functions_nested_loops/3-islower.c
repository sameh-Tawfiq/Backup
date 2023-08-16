#include "main.h"
/**
 * _islower - the function
 * Description: check character is lowercase or not
 * @c: the value it receives
 * Return: 0 or 1
 */
int _islower(int c)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (c == alpha)
		{
			return (1);
		}
	}
	return (0);
}
