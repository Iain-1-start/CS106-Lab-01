#include <stdio.h>

/* 
 * TMax - return maximum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmax(void)
{
    return ~(1 << 31);
    // if (8 << 28) - 1 bit --> overflow, but bitwise, will still get tmax.
}

int test_tmax(void)
{
    return 0x7FFFFFFF;
}

int main(void)
{
    printf("expected: %x\n", tmax());
    printf("actual  : %x\n", test_tmax());
}
