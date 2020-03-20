#include"holberton.h"
/**
 * _strstr - locating a substring
 * @needle: occurance to find
 * @haystack: string to search
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{
	char *src = haystack;
	char *sub = needle;

	while (*haystack && *sub && *haystack == *sub)
	{
		haystack++;
		sub++;
	}
	if (!*sub)
	return (src);
	haystack = src + 1;
	}
return (0);
}
