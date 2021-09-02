#include "main.h"

/**
  * print_most_numbers - Print the numbers from 0 - 9
  *
  * Description: Prints the numbers excluding 2 and 4
  *
  * Return: The numbers from  0 - 9
  */

void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}

	_putchar('\n' 0);
}
