#include "main.h"
/**
 * times_table - 9 Times table
 *
 * Return: 0
*/
int times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j) / 10 + '0');
			_putchar((i * j) % 10 + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
	return (0);
}
