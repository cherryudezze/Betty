#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i, co;

	co = 0;

	while (co < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		co++;
		_putchar('\n');
	}
}
