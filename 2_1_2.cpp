/*
2.
1.2 Write code to reverse a C-Style String.
*/

#include <iostream>
#include <string>

using namespace std;

void reverse(char*);
int main() {

	char str[100] = "ABCD";

	cout << "INPUT: [" << str << "]\r\n";
	reverse(str);
	cout << "OUTPUT: [" << str << "]\r\n";
	
	system("pause");
	return 0;
}

void reverse(char *str) {
	char * end = str;
	char tmp;
	if (str) {
		while (*end) ++end;
		--end;
		while (str < end) {
			tmp = *str;
			*str++ = *end;
			*end-- = tmp;
		}
	}
}
