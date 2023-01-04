#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to a string
 *
 * Return: length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s += 1;
	return (1 + _strlen_recursion(s));

}

/**
 * palindrome - check palindrome of string s
 * @s: pointer to string
 * @length: position of the string.
 *
 * Return: 1 if palindrome or 0 if not
 */

int palindrome(char *s, int length)
{
	if (length < 1)
		return (1);

	if (*s == *(s + length))
		return (palindrome(s + 1, length - 2));

	return (0);
}

/**
 * is_palindrome - check string is a palindrome or not
 * @s: pointer to string
 *
 * Return: 1 if palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	int getStringLength = _strlen_recursion(s);

	return (palindrome(s, getStringLength - 1));
}
