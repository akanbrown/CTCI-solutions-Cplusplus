/*
Question 3
1.3
Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer.
*/

#include <iostream>
using namespace std;

int RemoveDuplicates(char * pStr) {
	if (!pStr || !*pStr) return 0;
	int count[256] = { 0 };
	int current = 0, next = 0;
	while (pStr[current] != '\0') {
		if (++count[pStr[current]] == 1) {
			pStr[next++] = pStr[current];
		}
		++current;
	}

	pStr[next] = '\0';
	return next; // new length
}

int main() {
	char str[] = "112233";
	RemoveDuplicates(str);
	printf("Result=%s\n", str);
	system("pause");
	return 0;
}
