#include "main.h"

/**
 * _strlen - program that get the length of a string
 *
 * @s : string pointer to passed to this function
 * return : returns length of the string
 */
int _strlen(char *s)
{
	int len ;

	len = 0;

	while ((s) != '\0')
	    len++;
	return (len);
}
