#include <iostream>
using std::cin;
using std::cout;
#include <string.h>
#include <stdio.h>
#include <sstream>
#include <string>
using std::string;
using std::stringstream;

#define advertise "advertise\n"
#define noadvertise "do not advertise\n"
#define doesntmatter "does not matter\n"

int main()
{
	char * nIn = new char[4];
	string lineIn;
	cin >> nIn;
	cin.ignore();
	int n = atoi(nIn);
	int r, e, c;

	for (int i(0); i < n; ++i)
	{
		getline(cin, lineIn);
		stringstream inputStream(lineIn);
		
		inputStream >> r;
		inputStream >> e;
		inputStream >> c;

		if (r > (e - c))
		{
			cout << noadvertise;
		}
		else if (r == (e - c))
		{
			cout << doesntmatter;
		}
		else
		{
			cout << advertise;
		}
	}
}