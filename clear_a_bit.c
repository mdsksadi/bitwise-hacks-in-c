#include <stdio.h>

int main(void)
{
    unsigned char x = 0b01101101;

    printf("Before:\n");
    printf("x = %u\n", x);
    printf("Binary = 01101101\n\n");

    // Clear bit 6
    x = ~(1 << 6) & x;

    printf("After clearing bit 6:\n");
    printf("x = %u\n", x);
    printf("Binary = 00101101\n");

    return 0;
}