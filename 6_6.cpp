/**
There are one hundred closed lockers in a hallway. 
A man begins by opening all one hundred lockres. Next, 
he closes every second locker. Then he oes to every third 
locker and closes it if it is open or opens it if it is closed 
(e.g., he toggles every third locker). After his one hundredth 
pass in the hallway, in which he toggles only locker number one 
hundred, how many lockers are open?
**/


/**
Question: For which roounds is a door toggled (open or closed)?
A door n is toggled once for each factor of n, including itself and 1. That is, door 15
is toggled on round 1, 3, 5, and 15.

Question: When would a door be left open?
Ansewr: A door is left open if the number of factors (x) is odd. You can think about this
by pairing factors off as an open and a close. If there's one remaining, the door will
be oen.

Question: when would x be odd?
Answer: x is odd if n is a perfect square. Here's why: pair n's factors by their complements.
For example, if n is 36, the factors are (1, 36), (2, 18), (3, 12), (4, 9), (6, 6). 
Note that (6, 6) only contributes 1 factor, thus giving n an odd number of factors.

Question: How many perfect squares are there?
Answer: There ar e10 perfect squares. You could count them 
(1, 4, 9, 16, 25, 36, 49, 64, 81, 100), or you could simply realize tha tyou can take the 
numbers 1 thorugh 10 and square them (1*1, 2*2, 3*3, ..., 10*10).

**/

#include <iostream>

using namespace std;

int main(){
  print("Therefore, there are 10 lockers open.");
  system("pause");
  return 0;
}

