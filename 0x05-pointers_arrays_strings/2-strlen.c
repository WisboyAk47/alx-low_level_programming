#include "main.h"

/**
 * _strlen - program that get the length of a string
 *
 * @s : string pointer to passed to this function
 * return : returns length of the string
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
	len += 1;
	*s = *s + 1;
	}
	return (len);
}
