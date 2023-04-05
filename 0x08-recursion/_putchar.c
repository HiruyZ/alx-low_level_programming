#include "main.h"
#include <unistd.h>
/**
 * _putchar - print the char c
 * @c: the printed value
 *
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
