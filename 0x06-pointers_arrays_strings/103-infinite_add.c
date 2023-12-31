#include "main.h"

/**
 * infinite_add - prints an integer.
 * @n1: The first value to add.
 * @n2: The second value to add
 * @r: the hold result
 * @size_r: the size of buffer
 *
 * Return: result and 0 if error
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1;
int len2;
int carry;
int max_length;
int i;
int j;
int k;
int start;
int end;

carry = 0;
len1 = 0;
len2 = 0;
max_length = size_r - 1;

while (n1[len1] != '\0')
{
len1++;
}
while (n2[len2] != '\0')
{
len2++;
}

if (len1 > max_length || len2 > max_length)
{
return (0);
}

j = len2 - 1;
i = len1 - 1;
k = 0;

while (i >= 0 || j >= 0 || carry > 0) {
int digit1 = (i >= 0) ? n1[i] - '0' : 0;
int digit2 = (j >= 0) ? n2[j] - '0' : 0;

int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';
k++;

i--;
j--;
}

r[k] = '\0';

    
start = 0;
end = k - 1;
while (start < end)
{
char temp = r[start];
r[start] = r[end];
r[end] = temp;
start++;
end--;
}

return (r);
}
