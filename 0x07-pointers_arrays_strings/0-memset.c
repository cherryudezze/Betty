#include "main.h"

/**
 * _memset() fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: the constant
 * @n: the maximum bytes of the memory area
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
