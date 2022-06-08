#include "main.h"

/**
 * jack_bauer - jack bauer
 * Return: always 0
 */

void jack_bauer(void)
{
	int hour = 0;
	char hourDiv[1]; 
	char minuteDiv[1];

	while (hour < 24)
	{
		int minute = 0;
		
		while (minute < 60)
		{
			hourDiv =  hour / 10 >= 1 ? "": "0";
			minuteDiv = minute / 10 >= 1 ? "" : "0";

			_putchar('0' + hourDiv);
			_putchar('0' + hour);
			_putchar(':');
			_putchar('0' + minuteDiv);
			_putchar('0' + minute);
			
			minute++;
		}

		hour++
	}

	return (0);
}

