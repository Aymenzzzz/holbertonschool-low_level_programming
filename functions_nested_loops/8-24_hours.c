#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  *
  * Return: ...
  */
void jack_bauer(void)
{

int hour;

	for (hour = 0; hour < 24; hour++)
	{

		int min;

		for (min = 0; min < 60; min++)

	{
			_putchar(heure / 10 + '0');
			_putchar(heure % 10 + '0');
			_putchar(':');

			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');

			_putchar('\n');
	}

	}
}

