#include "main.h"

/**
 * jack_bauer - jack bauer
 * Return: always 0
 */

void jack_bauer(void)
{
	int hour = 0;
	
	while (hour < 24)
	{
		int minute = 0;
		
		while (minute < 60)
		{
			printf("%s%d:%s%d\n", hour / 10 >= 1 ? "" : "0", hour, minute / 10 >= 1 ? "" : "0", minute);
            minute++;
        }
        hour++;
    }

    return (0);

}

