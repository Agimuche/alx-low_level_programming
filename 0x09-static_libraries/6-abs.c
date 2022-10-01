#include "main.h"
<<<<<<< HEAD
/**
* _abs - prints the absolute value of a number
*@i: number targeted
*Return: returns 0
*/
int _abs(int i)
{
if (i > 0)
return (i);
else if (i < 0)
return (-i);
else
return (0);
=======
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
>>>>>>> e6362ae58b425086e6bd4093d22b9818b84b1525
}
