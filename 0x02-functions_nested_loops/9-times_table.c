#include <stdio.h>
/**
 * times_table - 9 Times table
 *
 * Return: 0
*/
int times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%2d", i * j);
			if (i * j != 81)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	return (0);
}
