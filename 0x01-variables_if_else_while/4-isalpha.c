#include "main.h"
/**
 * _isalpha - checks if input is uppercase
 * @c: input to be checked
 * 
 * Return: 1 if lower, 0 otherwise
*/
int _isalpha(int c)
{
	int i;
	int result = 0;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			result = 1;
		}
	}
	return (result);
}
