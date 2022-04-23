#include <stdio.h>
void main()
{
    int bin, dec = 0, base = 1, rem, temp;
    printf("Enter a binary number: ");
    scanf("%d", &bin);

    temp = bin;
    while (temp > 0)
    {
        rem = temp % 10;
        dec = dec + rem * base;
        temp = temp / 10;
        base = base * 2;
    }
    printf("The decimal number is: %d", dec);
}