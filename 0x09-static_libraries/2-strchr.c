<<<<<<< HEAD
#include "main.h"
#include <stddef.h>
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/
=======
#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
>>>>>>> e6362ae58b425086e6bd4093d22b9818b84b1525
char *_strchr(char *s, char c)
{
	int i;

<<<<<<< HEAD
	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
=======
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
>>>>>>> e6362ae58b425086e6bd4093d22b9818b84b1525
}
