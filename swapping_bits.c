#include <stdio.h>

int main(void)
{
    unsigned char x = 0b01100100;

    int A = 3;
    int B = 5;

    printf("Before:\n");
    printf("x = %u\n", x);
    printf("Binary = 01100100\n\n");

    // Calculate P
    unsigned char P = ((x >> A) ^ (x >> B)) & 1;

    printf("P = %u\n\n", P);    // P is the bit value to be swapped. If P is 0, it means the bits at positions A and B are the same, so no swap is needed. If P is 1, it means the bits are different, and we need to swap them.

    // Swap bits
    x ^= (P << A);
    x ^= (P << B);

    printf("After swapping bit %d and bit %d:\n", A, B);
    printf("x = %u\n", x);
    printf("Binary = 01001100\n");

    return 0;
}