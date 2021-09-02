#include "main.h"

/**
  * _isdigit - Check for digit 0-9
  * @c: The number to be checked
  *
  * Return: 1 if c is a digit or 0 if otherwise
  */
int _isdigit(int c)
{
	if (c >= 30 && c <= 39)
	{
		return (1);
	}

	return (0);
}
