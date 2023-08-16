#include "main.h"
/**
 * print_last_digit - function name
 * Description: prints the last digit of a number
 * @n: n is an integer received
 * Return: int
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit = last_digit * -1;
	}
	return (last_digit);
}
