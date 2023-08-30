#include "main.h"
/**
 * _pow_recursion - A function that returns the value of x
 * raise to the power of y
 * @x: The value
 * @y: The power the value is rased to
 * Return: The value of x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
