#include "./main.h"
/**
 * main - Prints _putchar
 * Return: 0
 */

void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int size = sizeof(str);

	for (i = 0; i < size - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
