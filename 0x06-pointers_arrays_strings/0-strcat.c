#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings
 * @dest: a String
 * @src: a String
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = O;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}

