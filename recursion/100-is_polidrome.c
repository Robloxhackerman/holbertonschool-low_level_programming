#include "main.h"

/**
 * is_palindrome - states if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}

/**
 * _peponaso - return length of string
 *
 * @str: string to check
 *
 * Return: length of str
 */
int _pepenaso(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(str + 1));
	}
}

/**
 * _pepenasote - checks to see if a string is a palindrome
 * 
 * @a: int
 * @b: int
 * @c: char
 *
 * Return: 1 if palindrome 0 if not
 */
int _pepenasote(int a, int b, char *c)
{
	if (a >= b)
	{
		return (1);
	}
	else if (c[a] != c[b])
	{
		return (0);
	}
	else
	{
		return (_pepenasote(a + 1, b - 1, c));
	}
}
