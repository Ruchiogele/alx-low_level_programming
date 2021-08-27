#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry block
 * Description: Displays the alphabet in lower and upper case
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
