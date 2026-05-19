#include <stdio.h>

int main(void)
{
    unsigned char x = 0b01101000;

    printf("Before:\n");
    printf("x = %u\n", x);
    printf("Binary = 01101000\n\n");

    // Convert trailing 0's to 1
    x = (x - 1) | x;

    printf("After converting trailing 0's to 1:\n");
    printf("x = %u\n", x);
    printf("Binary = 01101111\n");

    return 0;
}