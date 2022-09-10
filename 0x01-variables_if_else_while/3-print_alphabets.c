#include <stdio.h>

/**
   * main - Entry point
    *
     * Return: must be 0 for success
      */

int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	putchar(d);
	for (d = 'A'; d <= 'Z'; d++)
	putchar(d);
	putchar('\n');
	return (0);
}
