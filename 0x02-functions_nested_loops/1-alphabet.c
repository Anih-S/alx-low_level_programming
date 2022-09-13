#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase using only '_putchar'
 *
 * return: 0 on success
 *
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
