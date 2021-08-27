#include <stdio.h>

int main(void)
{
	char ab;

	for (ab = 'z'; ab >= 'a'; ab--)
	{
		putchar(ab);
	}
	putchar('\n');
	return (0);
}
