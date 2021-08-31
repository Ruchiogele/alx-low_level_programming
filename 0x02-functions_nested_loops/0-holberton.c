#include "main.h"

/**
 * main - Entry point
 * main -  prints Holberton, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch  = "Holberton";

	while (ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}
