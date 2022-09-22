#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: param
 * @dest: param 2
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != 0)
	{
		a++;
	}
	b = 0;
	while (src[b] != 0)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
