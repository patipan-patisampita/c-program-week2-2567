#include <stdio.h>
int test_type()
{
    int x = 0b1011;
    int y = 0x10;
    int z = 10;
    printf(" x in Decimal: %d\n", x);
    printf(" x in Octal: %o\n", x);
    printf(" x in Hexadecimal: %x\n\n", x);

    printf(" y in Decimal: %d\n", y);
    printf(" y in Octal: %o\n", y);
    printf(" y in Hexadecimal: %x\n\n", y);

    printf(" z in Decimal: %d\n", z);
    printf(" z in Octal: %o\n", z);
    printf(" z in Hexadecimal: %x\n", z);
    return 0;
}