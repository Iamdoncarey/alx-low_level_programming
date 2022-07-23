#include "main.h"

/**
* _strlen -> fuction to get the length of a string
* @s: string pointer to passed to this fuction
* Return: returns length of the string
*/
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
