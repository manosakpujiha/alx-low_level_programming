#include <stdio.h>

/**
* main - Print the name of the program
* @argc: Count argument
* @argv: Arguments
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
