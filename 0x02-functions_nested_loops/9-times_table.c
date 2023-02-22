#include "main.h"
/**
 * jack_bauer - Generates a 24row clock
 * Return: void
*/
void jack_bauer(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			_putchar(row 10 + '0');
			_putchar(row % 10 + '0');
			_putchar(':');
			_putchar(col / 10 + '0');
			_putchar(col % 10 + '0');
			_putchar('\n');
		}
	}
}
