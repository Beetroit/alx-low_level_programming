#include "main.h"
/**
 * print_line - prints a line of length n
 * @n: Length
*/
void print_line(int n)
{
	if (n<=0)
	{
		_putchar(10);
	} else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar(10);
	}
	
	
}