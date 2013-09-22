#include <string>
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void reverseString(string&);

int main() {
	string str;
	cout << "Enter a string: ";
	cin >> str;
	reverseString(str);
	cout << "The reversed string is: " << str << endl;
	return 0;
}

void reverseString(string& str) {
	std::reverse(str.begin(), str.end());
}
