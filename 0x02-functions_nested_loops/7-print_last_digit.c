#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: input number
 *
 * _abs - returns the absolute value
 * Return: Last digit
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n *= -1);
	}
	return (n);
}

int print_last_digit(int n)
{
	_putchar('0' + _abs(_abs(n) % 10));
	return (_abs(_abs(n) % 10));
}