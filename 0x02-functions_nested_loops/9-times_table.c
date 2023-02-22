#include "main.h"
#include <stdio.h>
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
			putchar(row / 10 + '0');
			putchar(row % 10 + '0');
			putchar(':');
			putchar(col / 10 + '0');
			putchar(col % 10 + '0');
		}
	}
}
int main(void)
{
	jack_bauer();
	return (0);
}