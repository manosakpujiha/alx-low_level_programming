#include "function_pointers.h"

/**
 * print_name - prints the name
* @name: the name to be printed
* @f: a pointer to the function that prints the name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
