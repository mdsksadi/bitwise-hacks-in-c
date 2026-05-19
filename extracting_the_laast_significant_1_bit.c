#include <stdio.h>

int main(void)
{
    unsigned char x = 0b01101000;

    printf("Original:\n");
    printf("x = %u\n", x);
    printf("Binary = 01101000\n\n");

    // Extract least significant 1 bit
    unsigned char result = x & -x;

    printf("Least significant 1 bit:\n");
    printf("Result = %u\n", result);
    printf("Binary = 00001000\n");

    return 0;
}