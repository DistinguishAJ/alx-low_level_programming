#include <stdio.h>
#include <stdlib.h>
/**
 * Descritptio: main - Print out a string to stdout.
 * Return: 0 if successfull.
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	printf("\n");

	return (0);
}
