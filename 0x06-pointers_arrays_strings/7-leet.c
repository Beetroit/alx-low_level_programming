#include "main.h"
/**
 * leet - Converts strings to leet
 * @str: String to be converted
 *
 * Returns: A leet encoded string
*/
char *leet(char *str)
{
	int i;
	char leet[] = "aAeEoOtTlL";
	char code[] = "43071";

	for (i = 0; str[i]; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = code[j / 2];
				break;
			}
		}
	}
	return (str);
}
