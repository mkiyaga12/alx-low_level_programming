#include "main.h"

/**
  * _strlen_recursion - main function
  *
  * @s: Function parameter
  *
  * Return: Length
  */
int _strlen_recursion(char *s)
{
	int ln = 0;

	if (*s)
	{
	ln++;
	ln += _strlen_recursion(s + 1);
	}
	return (ln);
}
