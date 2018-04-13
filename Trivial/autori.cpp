#include <iostream>
using std::cin;
using std::cout;
#include <string.h>
#include <stdio.h>

int main()
{
	char * input = new char[100];
	char * ptr = input;
	cin >> input;
	cout << *ptr;
	while (*ptr != NULL)
	{
		if (*ptr == '-')
		{
			cout << *(ptr + 1);
		}
		++ptr;
	}
}