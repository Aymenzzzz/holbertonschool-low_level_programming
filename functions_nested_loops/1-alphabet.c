#include "main.h"
/**
 * print_alphabet - print alphabet in - lowercass -
 *
 * Return: print standard output
 */

void print_alphabet(void)
{
	int letterz = 'a';

	for (; letterz <= 'z'; letterz++)
	{
		_putchar(letterz);
	}
	_putchar('\n');
}
