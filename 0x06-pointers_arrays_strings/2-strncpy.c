#include "holberton.h"
/**
* *_strncpy - function that copies a string
* @dest: array copied
* @src: original array
* @n: contador
* Return: array
*/
char *_strncpy(char *dest, char *src, int n)
{
	int conts;

	for (conts = 0; src[conts] != '\0'; conts++)
	{
		if (conts < n)
		{
		dest[conts] = src[conts];
		}
		if (dest[conts] < n)
		{
			dest[conts] = '\0';
		}
	}
src='\0';
return (dest);
}

