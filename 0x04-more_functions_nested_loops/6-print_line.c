#include "main.h"
/**
 * print_line - prints a line of length n
 * @n: Length
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar(10);
}