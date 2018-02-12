// C++ program for above implementation
#include <iostream>
using namespace std;
 
// Function to set the bits
int setBits(int n, int m, int i, int j)
{
    // number with all 1's
    int allOnes = ~0;
 
    // Set all the bits in the left of j
    int left = allOnes << (j + 1);
 
    // Set all the bits in the right of j
    int right = ((1 << i) - 1);
 
    // Do Bitwsie OR to get all the bits 
    // set except in the range from i to j
    int mask = left | right;
 
    // clear bits j through i
    int masked_n = n & mask;
 
    // move m into the correct position
    int m_shifted = m << i;
 
    // return the Bitwise OR of masked_n 

    // and shifted_m
    return (masked_n | m_shifted);
}
 
// Drivers program
int main()
{
    int n = 2, m = 4;
