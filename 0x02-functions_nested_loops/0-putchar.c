#include "main.h"
/**
 * main - Print _putchar followed by a new line
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	char holberton[] = "_putchar";
	int i = 0;

	while (holberton[i] != '\0')
	{
		_putchar(holberton[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
