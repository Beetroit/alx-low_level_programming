#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: input number
 *
 * Return: Last digit
*/
int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
