#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void pigLatin(string&);

int main() {
	string str;
	cout << "Enter a string to be Pig-Latin-ified: ";
	cin >> str;
	pigLatin(str);
	cout << "The PigLatin-ified version is: " << str << endl;
	return 0;
}

void pigLatin(string& str) {
	string s1 = str.substr(0,1);
	string s2 = str.substr(1);
	s2 += s1 + "ay";
	str = s2;
}
