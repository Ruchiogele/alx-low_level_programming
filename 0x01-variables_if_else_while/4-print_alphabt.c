#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Contains the running code
 * Description: Display alphabet in lowercase without q and e
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
