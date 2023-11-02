#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */

char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
    int j, k, mul, mulrem, add, addrem;

    mulrem = addrem = 0;
    for (j = num_index, k = dest_index; j >= 0; j--, k--)
    {
        mul = (n - '0') * (num[j] - '0') + mulrem;
        mulrem = mul / 10;
        add = (dest[k] - '0') + (mul % 10) + addrem;
        addrem = add / 10;
        dest[k] = add % 10 + '0';
    }
    for (addrem += mulrem; k >= 0 && addrem; k--)
    {
        add = (dest[k] - '0') + addrem;
        addrem = add / 10;
        dest[k] = add % 10 + '0';
    }
    if (addrem)
    {
        return (NULL);
    }
    return (dest);
}
