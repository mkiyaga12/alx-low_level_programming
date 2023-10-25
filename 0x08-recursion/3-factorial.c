#include "main.h"

/**
  * factorial - function par
  *
  * @n: function par
  *
  * Return: n.
  */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
