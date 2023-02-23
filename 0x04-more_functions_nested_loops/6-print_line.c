#include "main.h"
/**
 * print_line - prints a line of length n
 * @n: Length
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
}