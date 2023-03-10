#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s) {
    		// Base case: empty string
    if (*s == '\0') {
        return 0;
    }
    // Recursive case: count the current character and move to the next
    return 1 + _strlen_recursion(s + 1);
}
