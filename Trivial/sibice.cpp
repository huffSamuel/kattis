
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>
using std::sqrt;
#include <sstream>
#include <string>
using std::string;
using std::stringstream;

int main()
{
	int n, w, h;
	string input;
	getline(cin, input);

	stringstream inputStream(input);

	inputStream >> n;
	inputStream >> w;
	inputStream >> h;

	int maxSize = sqrt(w * w + h * h);
	int val;
	for (int i = 0; i < n; ++i)
	{
		getline(cin, input);

		if (atoi(input.c_str()) > maxSize)
		{
			cout << "\nNE";
		}
		else {
			cout << "\nDA";
		}
	}
}