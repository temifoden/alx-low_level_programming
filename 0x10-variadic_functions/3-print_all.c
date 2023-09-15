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
    int printed;
    va_list my_list;
    va_start(my_list, format);
    i = 0;
    printed = 0;

    while(format[i]){
        
        if (printed)
            printf(", ");

        switch (format[i])
        {
        case 'c':
            printf("%c", va_arg(my_list, int));
            printed = 1;
            break;
        case 'i':
            printf("%d", va_arg(my_list, int));
            printed = 1;
            break;
        case 'f':
            printf("%f", va_arg(my_list, double));
            printed = 1;
            break;
        case 's':
            str = va_arg(my_list, char *);
            str == NULL ? printf("(nil)") : printf("%s", str);
            printed = 1;
            break;
        default:
            break;
        }

        i++;
    }
    va_end(my_list);
    printf("\n");
}
