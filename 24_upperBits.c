#include <stdio.h>

/* 
 * upperBits - pads n upper bits with 1's
 *  You may assume 0 <= n <= 32
 *  Example: upperBits(4) = 0xF0000000
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 10
 *  Rating: 1
 */
int upperBits(int n)
{
    return (1 << 31) >> (n + ~0) & ((!!n) <<31) >> 31;
    // !! generates 1 bit of either 0 or 1
    // if n != 0, !n = false and !!n = 1 (true)
    // if n == 0, !n = true and !!n = 0 (false)
}

int test_upperBits(int x)
{
    int result = 0;
    int i;
    for (i = 0; i < x; i++)
        result |= (1 << (31 - i));
    return result;
}

int main(void)
{
    int x = 0;
    printf("expected: %x\n", upperBits(x));
    printf("actual  : %x\n", test_upperBits(x));
}
