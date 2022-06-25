#include <stdio.h>

/**
* main - prints all arguments it receives
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
	int start = 0;

	while (start < argc)
	{
		printf("%s\n", argv[start]);
		start++;
	}

	return (0);
}
