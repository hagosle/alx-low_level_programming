#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter and updates the value .
 *
 *@c: prints int 
 *
 * Return: Always 0.
 */
int reset_to_98(int *n)
{

    n = 402;
    _putchar("n=%d\n", n);
    reset_to_98(&n);
    _putchar("n=%d\n", n);
    return (0);
}
