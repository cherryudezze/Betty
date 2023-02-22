#include "main.h"
/**
 * title: islower
 * description: function that checks for lowercase character
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
		return (0);
}
