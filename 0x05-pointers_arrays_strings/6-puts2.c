#include "main.h"

/**
 * puts2 - prints one character out of time
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		eslse
			continue;
	}
	_putchar('\n');
}
