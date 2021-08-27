#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Contains the running code
 * Description: Display a single digit numbers
 * Return: 0
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
