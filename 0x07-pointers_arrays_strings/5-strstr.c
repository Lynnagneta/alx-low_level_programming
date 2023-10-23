#include "main.h"
#include <stdio.h>

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack) {
		char *start = haystack;

		while (*haystack && *needle && *haystack == *needle) {
			haystack++;
			needle++;
		}

		if (!*needle) {
			return start;
		}

		haystack = start + 1;
	}

	return NULL;
}
