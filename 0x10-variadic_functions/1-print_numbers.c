#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function entry
 * @separator: first member
 * @n: second member
 *
 * Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...){
    unsigned int i;
    va_list my_list;
    va_start(my_list, n);

    if (separator != NULL && n > 0){

        for (i = 0; i < n; i++){
            printf("%d", va_arg(my_list, int) );
            if (i != (n - 1))
            printf("%s", separator);
        }
    }
    printf("\n");
}
