#include <stdio.h>
/**
 * times_table - 9 Times table
 *
 * Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%2d", i * j);
			if (j != 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	return (0);
}
