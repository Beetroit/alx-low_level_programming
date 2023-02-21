#include "main.h"
/**
 * main - Prints _putchar
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";

	for (i = 0; i < sizeof(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
	return (0);
}
