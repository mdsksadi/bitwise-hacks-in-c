#include <stdio.h>

int main(void)
{
    unsigned char A = 0b01110101;
    unsigned char B = 0b11010111;
    unsigned char M = 0b01100101;

    printf("Before:\n");

    printf("A = %u\n", A);
    printf("Binary A = 01110101\n\n");

    printf("B = %u\n", B);
    printf("Binary B = 11010111\n\n");

    printf("M = %u\n", M);
    printf("Binary M = 01100101\n\n");


    // Masked Copy
    A = (B & M) | (A & ~M);

    printf("After masked copy:\n");
    printf("A = %u\n", A);
    printf("Binary A = 01100101\n");

    return 0;
}