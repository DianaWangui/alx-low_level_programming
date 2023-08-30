#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to calculate square root of
 *
 * Return: the result of the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));

}
/**
 * actual_sqrt_recursion - recuses to find the natural
 * square root of a number
 * @n: number to calculate square root of
 * @i: iterator
 *
 * Return: the resulting squre root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
