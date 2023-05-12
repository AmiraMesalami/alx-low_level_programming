#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: parameter defined in main
 * @src: parameter defined in main
 * @n: parameter defined in main
 *
 * Return: memory address of function (string)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp1 = dest;
	char *tmp2 = src;

	while (*dest != '\0')
	{
		dest++;
	}
	while (src < tmp2 + n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest++ = '\0';
	dest = tmp1;
	return (dest);
}

2-strchr.c
#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 *
 * @s: parameter defined in main, pointer to memory (string)
 * @c: parameter defined in main, character to be located
 *
 * Return: memory address of function (memory area)
 */

char *_strchr(char *s, char c)
{
	while (s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
	return (NULL);
}
