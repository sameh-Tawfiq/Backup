#include "main.h"
/**
 * _isalpha - the function
 * Description: check if it's alpha or not
 * @c: the value it receives
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (c == alpha)
		{
			return (1);
		}
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (c == alpha)
		{
			return (1);
		}
	}
	return (0);
}
