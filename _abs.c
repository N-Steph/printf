#include "main.h"

/**
 * _abs - return absolute value
 * @x: integer
 *
 * Return: -x or x
 */
unsigned int _abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}
