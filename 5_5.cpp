// Count number of bits to be flipped
// to convert A into B
#include <iostream>
using namespace std;
 

// Function that count set bits
int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
