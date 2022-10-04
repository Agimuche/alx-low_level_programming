<<<<<<< HEAD
#include "main.h"
=======
#include <stdio.h>
#include "main.h"

>>>>>>> e6362ae58b425086e6bd4093d22b9818b84b1525
/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
<<<<<<< HEAD
 * On success: return the number of characters printed
=======
 * On success: returns no error
>>>>>>> e6362ae58b425086e6bd4093d22b9818b84b1525
 */

void _puts(char *str)
{
<<<<<<< HEAD
while (*str)
_putchar(*str++);

_putchar('\n');
=======
	int i = 0;

	while (*(str + i) != '\0')
	{

		putchar(*(str + i));
		i++;
	}
	putchar(10);
>>>>>>> e6362ae58b425086e6bd4093d22b9818b84b1525
}
