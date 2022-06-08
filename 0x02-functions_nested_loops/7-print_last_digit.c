#include "main.h"

/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return:0 or 1
 */

int print_last_digit(int n)
{
	int last;
	n = n >= 0 ? n % 10 : (n % 10) * -1;
	
	_putchar('0' + n);
	
	return n;

}

