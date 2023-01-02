#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: where the occurrence to be searched
 * @needle: string to be searched
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *swapFirst = haystack;
		char *swapSecond = needle;

		while (*swapSecond != '\0' && *haystack != '\0' && *haystack == *swapSecond)
		{
			haystack += 1;
			swapSecond += 1;
		}

		if (*swapSecond == '\0')
			return (swapFirst);

		haystack = swapFirst + 1;
	}

	return (0);

}
