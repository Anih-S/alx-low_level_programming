#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9, without 2 and 4
 *
 * Return: from 0 to 9 without 2 and 4, followed by a new line
 *
 */

void print_most_numbers(void)
{
	int i;

	i = 0;

	for (i = 0; i < 10; i++)
	{

	if (i == 2 || i == 4)

	i++;

	_putchar(i + '0');

	}
	_putchar ('\n');

}
