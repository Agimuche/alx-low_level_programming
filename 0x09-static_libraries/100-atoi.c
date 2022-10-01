<<<<<<< HEAD
/**
* _atoi - changes a string to an int
=======
#include "main.h"

/**
* _atoi - converts a string to an int
>>>>>>> e6362ae58b425086e6bd4093d22b9818b84b1525
* @s: the string to be changed
*
* Return: the converted int
*/
<<<<<<< HEAD
int _atoi(char *s)
{
int i = 1;
unsigned int num = 0;
do {
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
num = num * 10 + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (num *i);
=======

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
>>>>>>> e6362ae58b425086e6bd4093d22b9818b84b1525
}
