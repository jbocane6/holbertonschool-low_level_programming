#include "main.h"

/**
 * funcion - 
 * @variable: 
 * @variable: 
 * Return: 
*/

unsigned int binary_to_uint(const char *b)
{
    unsigned int size = strlen(b);
    unsigned int counter, exp = 1, sum = 0, i;

    if (b == NULL)
        return (0);

    for (counter = 0; counter < size; counter++)
    {
        if (b[counter] != '0' && b[counter] != '1' )
            return (0);

        exp = 1;
        for (i = 0; i < counter; i++)
        {
            if (counter == 0)
            {
                exp = 1;
                break;
            }
            exp = 2 * exp;
        }            
        sum = sum + (exp * (int)(b[size - 1 -  counter] - '0'));
    }
    return (sum);
}