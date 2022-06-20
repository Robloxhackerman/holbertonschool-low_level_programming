#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pepenasato(s, 0, _pepenaso(s)));
}

/**
 * _pepenaso - returns the length of a string
 * 
 * @s: string to check
 *
 * Return: length of the string
 */
int _pepenaso(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _pepenaso(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * 
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int _pepenasato(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_pepenasato(s, i + 1, len - 1));
}
