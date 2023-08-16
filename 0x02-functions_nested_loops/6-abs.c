#include "main.h"
/**
 * _abs - function name
 * Description: computes the absolute value of an integer.
 * @n: the value it receives
 * Return: int
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-n * -1);
	}
	return (n);
	
}
