#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if uppercase
 * @c: character to check
 *
 * Return: gives 1 or 0
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
