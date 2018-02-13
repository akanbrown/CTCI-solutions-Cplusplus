/*
Given a number passed in as a string, 
print the binary representation. If the number can not be represented accurately in binary, print "ERROR".
*/
#include <string>
#include <bitset>
#include <iostream>
using namespace std;
int main(){
  string myString = "Hello World";
  for (std::size_t i = 0; i < myString.size(); ++i)
  {
      cout << bitset<8>(myString.c_str()[i]) << endl;
  }
  print("%s", "ERROR");
  system("pause");
  return 0;
}
