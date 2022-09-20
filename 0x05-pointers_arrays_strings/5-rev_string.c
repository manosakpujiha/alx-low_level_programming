#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter
 */

void rev_string(char *s)
{
	int i = 0, size, half;
	char initial, end;

	while (s[i] != '\0')
	{
		i++;
	}
	size = i - 1;
	half = size / 2;
	while (half >= 0)
	{
		initial = s[size - half];
		end = s[half];
		s[half] = initial;
		s[size - half] = end;
		half--;
	}
}
