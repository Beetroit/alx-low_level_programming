#include <stdio.h>
/**
 * main - Having fun with numbers
 * Return: 0
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (((i / 10) + (i % 10)) < ((j / 10) + (j % 10)))
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(32);
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (((i / 10) + (i % 10) + (j / 10) + (j % 10)) != 35)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
