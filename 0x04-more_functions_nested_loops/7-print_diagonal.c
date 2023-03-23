#include "main.h"

/**
 * print_diagonal - function that prints lines diagonal
 * @n: input variable
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < i; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
