/**
You have a five quart jug and a three quart jug, and an unlimited 
supply of water (but no measuring cups). How would you come up with 
exactly four quarts of water? NOTE: The jugs are oddly shaped, such 
that filling up exactly 'half' of the jug would be impossible.
**/

#include <iostream>

int main(){
  printf("We can pour water back and forth between the two jugs as follows:" +
         "5 quart contents\t\t3 Quart Contents\t\tNote" +
         "5\t\t0\t\tFilled 5 quart jug" +
         "2\t\t3\t\tFilled 3Q with 5Q's contents" +
         "0\t\t2\t\tDumped 3Q" +
         "5\t\t2\t\tFilled 5Q" +
         "4\t\t3\t\tFilled remainder of 3Q with 5Q" +
         "4\t\t\t\t Done! We have four quarts");
  system("pause");
  return 0;
}
