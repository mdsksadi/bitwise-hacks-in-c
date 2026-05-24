#include <stdio.h>

int main(void)
{
    unsigned char x = 0b01100011;
    int c = 0;

    printf("Before:\n");
    printf("x = %u\n", x);
    printf("Binary = 01100011\n\n");

    // Kernighan's population count
    // Count number of 1's in x
    while (x != 0)
    {
        x = x & (x - 1);
        c++;
    }

    printf("After counting 1 bits:\n");
    printf("Count = %d\n", c);
    printf("Final x = %u\n", x);
    printf("Binary = 00000000\n");

    return 0;
}