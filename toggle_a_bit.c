#include <stdio.h>

int main(void)
{
    unsigned char x = 0b00101101;

    printf("Before:\n");
    printf("x = %u\n", x);
    printf("Binary = 00101101\n\n");

    // Toggle bit 6
    x = (1 << 6) ^ x;

    printf("After toggling bit 6:\n");
    printf("x = %u\n", x);
    printf("Binary = 01101101\n");

    return 0;
}