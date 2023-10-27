#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: points to a string
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		int i = 0;

		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}
