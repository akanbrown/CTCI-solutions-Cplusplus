/**
There is an 8x8 chess board in which two diagonally opposite 
corners have been cut off. You are given 31 dominos, anda single 
domino can cover exactly two squares. Can you use the 31 dominos 
to cover the entire board? Prove your answer (by providing an 
example, or showing why it's impossible).
**/

#include <iostream>
using namespace std;

int main(){
  print("Hello World\n");
  /**
  Impossible. Here's why: The chess board initially has 32 black and 32 white squares. By removing 
  opposite corners (which must be the same color), we're left with 30 of one color and 32 of 
  the other color. Let's say, for hte sake of argument, that we have 30 black and 32 white
  squares.
  
  When we lay down each domino, we're taking up one white and one black square. Therefore,
  31 dominos will take up 31 white squares and 31 black squares exactly. On this board, however,
  we must have 30 black squares and 32 white squares. Hence, it is impossible.
  **/
  system("pause");
  return 0;
}
