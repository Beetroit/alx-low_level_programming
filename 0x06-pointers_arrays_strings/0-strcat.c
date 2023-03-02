#include "main.h"
char *_strcat(char *dest, char *src)
{
	int i = 0; // index for dest
	int j = 0; // index for src

	// find the end of dest
	while (dest[i] != '\0')
	{
		i++;
	}

	// copy src to dest
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	// add the null terminator
	dest[i] = '\0';

	// return the pointer to dest
	return dest;
}
