/*
Question 5
1.5 Write a method to replace all spaces in a string with '%20'.
*/
#include <iostream>
using namespace std;

const int MAX = 1000;
int replaceSpaces(char str[])
{
	int space_count = 0, i;
	for (i = 0; str[i]; i++)
		if (str[i] == ' ')
			space_count++;

	while (str[i - 1] == ' ')
	{
		space_count--;
		i--;
	}

	int new_length = i + space_count * 2 + 1;
	if (new_length > MAX)
		return -1;

	int index = new_length - 1;

	str[index--] = '\0';
	for (int j = i - 1; j >= 0; j--)
	{
		if (str[j] == ' ')
		{
			str[index] = '0';
			str[index - 1] = '2';
			str[index - 2] = '%';
			index = index - 3;
		}
		else
		{
			str[index] = str[j];
			index--;
		}
	}

	return new_length;
}


int main()
{
	char str[MAX] = "Mr John Smith   ";
	int new_length = replaceSpaces(str);
	for (int i = 0; i<new_length; i++)
		printf("%c", str[i]);
	cout << endl;
	system("pause");
	return 0;
}
