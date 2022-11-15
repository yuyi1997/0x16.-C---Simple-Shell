#include "shell.h"

/**
 * _strcat - concats two strings
 * @dest: the destination string
 * @src: the source
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i = 0;

	while (dest[dlen])
		dlen++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}

/**
 * _strlen - counts the length of a string
 * @s: the string to count
 * Return: the length of a string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: int value
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, pos = 0, diff = 0, lim = 0;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (len_s1 <= len_s2)
		lim = len_s1;
	else
		lim = len_s2;

	while (pos <= lim)
	{
		if (s1[pos] == s2[pos])
		{
			pos++;
			continue;
		}
		else
		{
			diff = s1[pos] - s2[pos];
			break;
		}

		pos++;
	}
	return (diff);
}

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: the string duplicated
 */

char *_strdup(char *str)
{
	int idx = 0, len = 1;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	dup_str = malloc((sizeof(char) * len) + 1);
	if (dup_str == NULL)
		return (NULL);

	while (idx < len)
	{
		dup_str[idx] = str[idx];
		idx++;
	}

	dup_str[idx] = '\0';
	return (dup_str);
}

/**
 * _atoi - convert a string to an integer
 * @s: the pointer to convert
 * Return: an integer
 */

int _atoi(char *s)
{
	int min = 1, isi = 0, pos = 0;
	unsigned int ni = 0;

	while (s[pos])
	{
		if (s[pos] == '-')
			min *= -1;

		while (s[pos] >= '0' && s[pos] <= '9')
		{
			isi = 1;
			ni = (ni * 10) + (s[pos] - '0');
			pos++;
		}

		if (isi == 1)
			break;

		pos++;
	}

	ni *= min;
	return (ni);
}