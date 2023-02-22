#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number
 * @n: input number
 *
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
	_putchar('0' + _abs(n) % 10);
	return (_abs(n) % 10);
}