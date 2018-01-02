
/*
Chapter 1 question 8
Total: Question 8Assume you have a method isSubstring which checks 
if one word is a substring of another. Given two strings, s1 and s2, 
write code to check if s2 is a rotation of s1 using only one call to 
isSubstring (i.e., "waterbottle" is a rotation of "erbottlewat").
*/

/*
Simply check if s1 length == s2 length. If not return false.
Else, concatenate s1 with itself and see whether s2 is a substring
of the result.
input: s1 = apple, s2 = pleap ==> apple is a substring of pleappleap
input: s1 = apple, s2 = ppale ==> apple is not a substring of ppaleppale
*/

#include <iostream>
#include <string>
using namespace std;

bool isSubstring(string, string);
bool isRotation(string, string);

int main() {

	string s1, s2;
	cout << "Input two strings." << endl;
	cin >> s1 >> s2;
	cout << "You entered: ";
	cout << s1 << " and " << s2 << endl;

	if (isRotation(s1, s2))
		cout << s2 << " is a rotation of " << s1 << endl;
	else
		cout << s2 << " is not a rotation of " << s1 << endl;
	system("pause");
	return 0;
}

bool isRotation(string s1, string s2) {
	int len1 = s1.length();
	int len2 = s2.length();

	if ((len1 > 0) && (len1 == len2)) {
		string s1s1 = s1 + s1;
		return isSubstring(s1s1, s2);
	}
	return false;
}

bool isSubstring(string s1, string s2) {
	return (s1.find(s2) != string::npos);
}
