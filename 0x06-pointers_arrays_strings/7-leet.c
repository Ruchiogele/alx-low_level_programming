#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: String
 * Return: string that is encoded
 */

char *leet(char *a)
{
	char *cp = a;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*a)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
		
			if (*a == key[i] || *a == key[i] + 32)
			{
				*a = 48 + value[i];
			}
		}
		a++;
	}

	return (cp);

}
