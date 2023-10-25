#include "main.h"
/**
  * _pow_recursion - function
  * @x: par 1
  * @y: par 2
  * Return: value of a given number
  */
int _pow_recursion(int x, int y)
{

if (y < 0)
	return (-1);

else if (y == 0)
	return (1);

else
	return (x * _pow_recursion(x, (y - 1)));

return (0);
}
