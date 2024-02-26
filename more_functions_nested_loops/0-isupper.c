#include "main.h"
#include <stdio.h>
#include <ctype.h>

int _isupper(int c);
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
    /*
    * Check if the character is an uppercase letter
    */
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

