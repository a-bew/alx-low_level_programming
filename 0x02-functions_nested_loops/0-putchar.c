#include <main.h>

/**
* main -Entry point
* Return: 0
*/

int main(void)
{
	char c[5] = "Main";
	int i = 0;
	while (i < 4)
	{
		_putchar(c[i]);
		i++;
	}

	putchar('\n');

	return (0);
}

