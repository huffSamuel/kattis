#include <iostream>
#include <sstream>
#include <string>
using std::string;
using std::stringstream;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int r1, s;
    string input;
    getline(cin, input);

    stringstream inputStream(input);

    inputStream >> r1;
    inputStream >> s;

    cout << '\n' << (2 * s) - r1;
}
