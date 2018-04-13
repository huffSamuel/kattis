#include <iostream>
using std::cin;
using std::cout;
#include <string.h>
#include <stdio.h>

int main()
{
	char * input = new char[31];
	char * ptr = input;
	cin >> input;

	bool hiss(false);

	while (*ptr != NULL && !hiss)
	{
		if (*ptr == 's' && *(ptr + 1) == 's')
		{
			hiss = true;
		}
		++ptr;
	}

	if (!hiss)
	{
		cout << "no ";
	}

	cout << "hiss";
}