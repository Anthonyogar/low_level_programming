#include "main.h"

/**
 * str_checker - check if two strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @i: left index.
 * @j: special index. (joker)
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}





/**
 * wildcmp - compare two strings and returns 1 if the strings can be considered identical
 * @s1: first string to compare
 * @s2: second string to compare (can contain * as a special character)
 *
 * Return: 1 if s1 and s2 can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*s1 == '\0')
        {
            return (wildcmp(s1, s2 + 1));
        }
        else
        {
            return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
        }
    }
    else if (*s1 == *s2)
    {
        if (*s1 == '\0')
        {
            return (1);
        }
        else
        {
            return (wildcmp(s1 + 1, s2 + 1));
        }
    }
    else
    {
        return (0);
    }
}
