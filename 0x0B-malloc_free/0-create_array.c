#include "main.h"


char *create_array(unsigned int size, char c)
{
int unsigned i;
if (size == 0)
{
return NULL;
}

char *arr = (char *)malloc(sizeof(char) * size);
if(arr == NULL)
{
return NULL;
}

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return arr;

}
