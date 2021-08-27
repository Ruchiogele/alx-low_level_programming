#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Display all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char a;
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
