#include "./main.h"
/**
 * is_lower - Checks if input is lowercase
 * @c: Char to be checked
 * Return: 1 if True, 0 otherwise
 */

int is_lower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			return (1);
		} else if (i == 122 || i != c)
		{
			return (0);
		}
	}
	_putchar(10);
}
