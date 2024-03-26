#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - function entry
 * @format: parameter
 *
 * Return: Nothing
*/

void print_all(const char * const format, ...){
    int i;
    char *str;
    va_list my_list;
    va_start(my_list, format);
    i = 0;
    while(format && format[i])
    {    
    switch (format[i])
        {
        case 'c':
            printf("%c", va_arg(my_list, int));
            break;
        case 'i':
            printf("%d", va_arg(my_list, int));
            break;
        case 'f':
            printf("%f", va_arg(my_list, double));
            break;
        case 's':
            str = va_arg(my_list, char *);
            str == NULL ? printf("(nil)") : printf("%s", str);
            break;
        default:
            break;
        }
        if (format[i + 1] && (format[i] == 'i' || format[i] == 'c' || format[i] == 's' || format[i] == 'f'))
        printf(", ");
        i++;
    }
    va_end(my_list);
    printf("\n");
}
