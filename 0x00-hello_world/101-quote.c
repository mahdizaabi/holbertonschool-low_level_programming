#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * main - main function
 *
 * Return: 1
 */
int main(void)
{
	char *string;
	char str1[] = "and that piece of art is useful\"";
	char str2[] = "- Dora Korpar, 2015-10-2019";

	string = malloc(strlen(str1) + strlen(str2) + 1);
	strcpy(string, str1);
	strcpy(string, str2);
	write(2, string, sizeof(string));

return (1);
}
