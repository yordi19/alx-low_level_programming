#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an arrray
 * @a: array
 * @n: numbers of variable to be printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
