#include "main.h"
char *cap_string(char *str)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 1; str[i]; i++)
	{
		for (int j = 0; separators[j]; j++)
		{
			if (str[i - 1] == separators[j] && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				break;
			}
		}
	}
	return (str);
}