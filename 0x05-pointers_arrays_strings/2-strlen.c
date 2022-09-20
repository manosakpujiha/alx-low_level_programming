#include "main.h"

/**
 * _strlen - prints lenght of a string
 * @s: character pointer
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
