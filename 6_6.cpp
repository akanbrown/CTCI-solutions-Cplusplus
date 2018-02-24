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

Question: when would 

#include <iostream>

using namespace std;

int main(){
