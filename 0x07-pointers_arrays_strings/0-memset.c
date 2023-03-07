#include "main.h"

/**
 * *_memset()- fill a block of  memory with a constant bytes.
 * @s: pointer to put the constant.
 * @b: the constant.
 * @n: number of bytes to be changed
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
